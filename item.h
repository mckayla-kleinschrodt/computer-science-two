#pragma once
#include <iostream>
#include <string>

using namespace std;

class Item
{
public:
	Item();
	Item(int, string, double, int);

	int getItemId() const;
	string getItemName() const;
	double getPrice() const;
	int getNumberInStock() const;

	void setItemId(int);
	void setItemName(string);
	void setPrice(double);
	void setNumberInStock(int);

	void printItem() const;

private:
	int itemId;
	string itemName;
	double price;
	int numberInStock;
};
