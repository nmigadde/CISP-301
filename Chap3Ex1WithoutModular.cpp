#include <iostream>
#include <string>
using namespace std;

int main() {
	string ItemName;
	float DiscountRate = 0;
	float OriginalPrice = 0;
	float SalePrice = 0;
	float TotalPrice = 0;
	float Tax = 0;
	float AmountSaved = 0;

	cout << "Sale Price Program" << endl;
	cout << "This program computes the total price, including tax, of an item that has been discounted a certain percentage." << endl;

	cout << "What is the item's name?" << endl;
	cin >> ItemName;
	cout << "What is its price?" << endl;
	cin >> OriginalPrice;
	cout << "What is the percentage discounted?" << endl;
	cin >> DiscountRate;

	AmountSaved = OriginalPrice * (DiscountRate / 100);
	SalePrice = OriginalPrice - AmountSaved;
	Tax = SalePrice * .065;
	TotalPrice = SalePrice + Tax;

	cout << "The item is: " << ItemName << endl;
	cout << "Pre-sale price was: " << OriginalPrice << endl;
	cout << "Sale price: " << SalePrice << endl;
	cout << "Sales tax: " << Tax << endl;
	cout << "Total: $" << TotalPrice << endl;

	system("pause");
	return 0;
}