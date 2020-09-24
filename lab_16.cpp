#include<iostream>
#include<string>
using namespace std;

string getID();

int main()
{
	//TODO: Wrap the code in a try to locate any errors that might arise

	while (true) {
		try {
			cout << getID() << endl;
		}
		catch (logic_error Error) {
			cout << endl << Error.what() << typeid(Error).name() << endl;
			return 1;
		}
	}
		
	

	//TODO: Implement a catch block that catches exceptions of type logic_error.
	//Inside the catch block, print the error message using the what() function.
	//Print the type of error using the typeid() and name() functions.
	//Return an exit code of 1, to signify that the program exited with an issue.

	return 0;
}

string getID()
{
	string id;
	cout << "Please enter your 9 digit WSU student ID: ";
	cin >> id;
	int length = id.length();

	if (length < 9)
		throw logic_error("Caught an exception. String length underflow.");
	else if (length > 9)
		throw logic_error("Caught an exception. String legnth overflow");

	
	return string();
}