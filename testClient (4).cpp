#include <iostream>
#include <fstream>
#include <string>
#include "item.h"

using namespace std;

const int ARR_SIZE = 5;
const string FILENAME = "input.txt";

int main()
{
	Item itemList[ARR_SIZE];
	ifstream inData;
	int tempItemId;
	string tempItemName;
	double tempPrice;
	int tempNumberInStock;

	inData.open("input.txt");

	if (!inData) {

		cout << "File could not open!" << endl;
		return 1;
	}

	for (int i = 0; i < ARR_SIZE; i++) {

		if (!inData) {
			cout << "Error Parsing!" << endl;
			return 2;
		}

		inData >> tempItemId >> tempItemName >> tempPrice >> tempNumberInStock;

		itemList[i].setItemId(tempItemId);
		itemList[i].setItemName(tempItemName);
		itemList[i].setPrice(tempPrice);
		itemList[i].setNumberInStock(tempNumberInStock);

	}
	for (int j = 0; j < ARR_SIZE; j++) {

		itemList[j].printItem();
		cout << endl;
	}

	return 0;
}
