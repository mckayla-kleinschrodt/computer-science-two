#include "GradeBook.h"

GradeBook::GradeBook()
{
	numberOfGrades = 0;
	gradeAverage = 0.0;
	gradesArr = NULL;
}


GradeBook::GradeBook(const GradeBook &other)
{
	numberOfGrades = other.numberOfGrades;
    //Set this class' numberOfGrades to the other GradeBook object's numberOfGrades
	gradeAverage = other.gradeAverage;
	//Set this class' gradeAverage to the other GradeBook object's gradeAverage
	
	gradesArr = new int [numberOfGrades];
	//Set gradesArr to a new integer dynamic array, using numberOfGrades as the length
	for (int i = 0; i < numberOfGrades; i++) {
		gradesArr[i] = other.gradesArr[i];
	}
	//Use a for loop to iterate through gradesArr and set the value at each position to the other GradeBook object's value at the same position
}



GradeBook::~GradeBook()
{
	if (gradesArr != NULL)
	{
		delete [] gradesArr;
	}
		
}


//This given function will generate a array of grades and stored in array variable gradesArr
void GradeBook::generateGrades()
{
	if (gradesArr != NULL)
		delete[] gradesArr;

     // The number of graded assignments and grades are randomized, so your output will have different values
	numberOfGrades = rand() % 10 + 1;
	gradesArr = new int[numberOfGrades];

	int sum = 0;

	for (int i = 0; i < numberOfGrades; i++)
	{
		gradesArr[i] = rand() % 30 + 71;
		sum += gradesArr[i];
	}

	if (numberOfGrades > 0)
		gradeAverage = static_cast<double>(sum) / numberOfGrades;
	else
		gradeAverage = 0.0;
}

void GradeBook::zeroGrades()
{
	for (int i = 0; i < numberOfGrades; i++)
		gradesArr[i] = 0;

	gradeAverage = 0.0;
}

void GradeBook::printGrades() const
{
	cout << "Grades: ";

	for (int i = 0; i < numberOfGrades; i++)
		cout << gradesArr[i] << " ";
	cout << endl;
	
	cout << fixed << showpoint << setprecision(2);
	cout << "Average: " << gradeAverage << endl << endl;
}
