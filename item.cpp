#include "item.h"

Item::Item()
{
	itemId = 0;
	itemName = "Unknown";
	price = 0;
	numberInStock = 0;
}

Item::Item(int id, string name, double itemPrice, int num)
{
	itemId = id;
	itemName = name;
	price = itemPrice;
	numberInStock = num;

}

int Item::getItemId() const
{
	return itemId; 
}

string Item::getItemName() const
{
	return itemName;
}

double Item::getPrice() const
{
	return price;
}

int Item::getNumberInStock() const
{
	return numberInStock;
}

void Item::setItemId(int id)
{
	itemId = id;

}

void Item::setItemName(string name)
{
	itemName = name;
}

void Item::setPrice(double itemPrice)
{
	price = itemPrice;
}

void Item::setNumberInStock(int num)
{
	numberInStock = num;
}

void Item::printItem() const
{
	cout << "Item ID: " << itemId << endl <<
		"Item Name: " << itemName << endl <<
		"Price: " << price << endl <<
		"Number in Stock: " << numberInStock << endl;
}
