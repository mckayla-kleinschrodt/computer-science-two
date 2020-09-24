#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Person
{
public:
	Person() {
		setData("unknown-first", "unknown-last");
	}
	Person(string first, string last) {
		setData(first, last);
	}

	void setData(string first, string last) {
		firstName = first;
		lastName = last;
	}

	void printData() const {
		cout << "\nName: " << firstName << " " << lastName << endl;
	}

private:
	string firstName;
	string lastName;
};

class Musician : public Person
{
public:
	Musician() {
		instrument = "unknown-instrument";
	}

	Musician(string first, string last, string inst)
		: Person(first, last)
    {
		instrument = inst;
	}

	void setData(string first, string last, string inst) {
		Person::setData(first, last);
		instrument = inst; 
	}

	void printData() const {
		Person::printData();
		cout << "Instrument: " << instrument << endl;
	}

private:
	string instrument;
};

class Writer : public Person
{
public:
	Writer() {
		genre = "unknown-genre";
	}

	Writer(string first, string last, string gen)
		: Person(first, last)
    {
		genre = gen;
 
    }

	void setData(string first, string last, string gen) {
        
		Person::setData(first, last);
		genre = gen;
     
	}
	void printData() const {
		Person::printData();
		cout << "Genre: " << genre << endl;
	}

private:
	string genre;
};


int main() {

	int numberOfMusicians = 0;
	int numberOfWriters = 0;
	string str1, str2, str3;
	ifstream fin;
	Musician *musicians; 
	Writer *writers;


	fin.open("music.txt");

	if (!fin) {
		cout << "File could not open!" << endl;
	}

	fin >> numberOfMusicians;

	musicians = new Musician[numberOfMusicians];

	for (int i = 0; i < numberOfMusicians; i++) {
		fin >> str1 >> str2 >> str3;
		musicians[i].setData(str1, str2, str3);
		musicians[i].printData();
	}
	
	fin.close();

	fin.open("writer.txt");

	if (!fin) {
			cout << "File could not open!" << endl;
	}

	fin >> numberOfWriters;
	
	writers = new Writer[numberOfWriters];

	for (int j = 0; j < numberOfWriters; j++) {	
		fin >> str1 >> str2 >> str3;
		writers[j].setData(str1, str2, str3);
		writers[j].printData();
	}

	fin.close();

	
	delete [] writers;
	delete [] musicians;
	// TODO:  Loop through the musicians' array and print all of its data.  
	// Then loop through the writers' array and print all of its data. 15 pts.
	

	return 0;
}
