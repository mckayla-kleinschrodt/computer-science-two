#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;

class GradeBook
{
public:
	GradeBook();
	
	
	GradeBook(const GradeBook &other);
	
	
	~GradeBook();
	
	
	void generateGrades();
	void zeroGrades();
	void printGrades() const;

private:
	int numberOfGrades;
	double gradeAverage;
	int *gradesArr;
};

#endif // !GRADEBOOK_H



