#include <iostream>

using namespace std;

void stars(int countUp, int countDown)
{

	for (int i = 0; i < countUp; i++)
	{
		cout << "*";
	}
	cout << endl;

	++countUp;

	if (countUp < countDown)
	{
		stars(countUp, countDown);
	}

	for (int j = 0; j < countUp; j++)
	{
		cout << "*";
	}
	cout << endl;

}

int main()
{
	int i = 0;
	cout << "Input the value: ";
	cin >> i;
	stars(0, i);
	return 1;
}