#include <iostream>
#include <string>
using namespace std;

int main() {
	float Price;
	float Tip;
	
	cout << "Enter the price of the meal.";
	cin >> Price;
	Tip = 0.15 * Price;
	cout << "Price of the meal: " << Price << endl;
	cout << "Amount of the tip: " << Tip << endl;

	system("pause");
	return 0;
}