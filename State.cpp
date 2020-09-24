#include "State.h"

using namespace std;

State::State() {}

void State::runProgram()
{
    string trash = "";
    char action = 0;
    displayChoices();

    while (true)
    {
        try
        {
            cout << "\nPlease select: ";
            cin >> action;
            getline(cin, trash);

            switch (action)
            {
                case '1':
                addCity();
                break;
                case '2':
                deleteLastElement();
                break;
                case '3':
                printSpecificCity();
                break;
                case '4':
                printAll();
                break;
                case '5':
                displayChoices();
                break;
                case '6':
                return;
                default:
                cout << "Invalid Input. Try again.\n";
            }
        }
        catch (exception e)
        {
            cout << e.what() << endl;
            cin.clear();
            getline(cin, trash);
        }
    }
}

void State::displayChoices() const
{
    cout << "1. Add City" << endl;
    cout << "2. Delete Last City" << endl;
    cout << "3. Print City" << endl;
    cout << "4. Print List" << endl;
    cout << "5. Show Menu" << endl;
    cout << "6. Quit" << endl;
}

void State::addCity()
    
{
    // TODO:  Implement the addCity() function.  Prompt the user
    // to enter a city name and population.  Add that City object
    // to the back of the cities vector. 
    string name;
    int population;

    for (int i = 0; i < 1; i++) {

        cout << "Please enter city name: " << endl;
        cin >> name;

        cout << "Please enter population: " << endl;
        cin >> population;

        cities.push_back(City(name, population));
    }

    displayChoices();

    runProgram();

}


void State::deleteLastElement()
{

     //Delete the last object in the cities vector using pop_back method 
      //only if cities vector is not empty 

    cities.pop_back();
}

void State::printSpecificCity()
{
    // TODO:  Implement the printSpecificCity() function.  Prompt the
    // user to enter the name of a City to print.  If a matching name
    // is found in the vector, print that City object.  If no
    // matching city is found in the vector, print a "city not found"
    // message.

    string namedCity;
    cout << "Enter the city name: ";
    cin >> namedCity;

    vector<City> ::iterator it;

    for (it = cities.begin(); it != cities.end(); it++) {
        if (namedCity == it->getName()) {
            it->printCity();
        }
        else
            cout << "Entered city not found." << endl;
    }
}

void State::printAll()
{
    vector<City>::iterator it;

    if (cities.empty())
    {
        cout << "list empty.\n";
        return;
    }
    
    for (it = cities.begin(); it != cities.end(); it++)
         it->printCity();
    
    cout << endl;
}

