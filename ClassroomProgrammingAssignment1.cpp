#include <iostream>
#include <string>
using namespace std;

/* This program will calculate the income tax based on amount of user's income.

User will enter a taxable income,
then the program will calculate the income tax.

Program also checks if user enters a negative income and provides a suitable response. 

Author: Nabir Migadde
Date: 6/17/2017
Time: 1:27pm


*/

int main() {
	//Description of the program
	cout << "This program will calculate the income tax based on amount of user's income." << endl;

	//Declare variables
	float income = 0;
	float tax = 0;

	//Prompt the user for taxable income
	cout << "Enter the taxable income (no dollar sign)" << endl;
	cin >> income;

	//Calculate income tax given taxable income
	if (income < 50000) {
		if (income < 0) {
			cout << "Cannot calculate tax on a negative income!" << endl;
		} else {
			tax = income * .05;
			cout << "The tax on $ " << income << " is $ " << tax << "." << endl;
		}
	} else {
		if (income < 100000) {
			tax = 2500 + ((income - 50000) * .07);
			cout << "The tax on $ " << income << " is $ " << tax << "." << endl;
		} else {
			tax = 6000 + ((income - 100000) * .09);
			cout << "The tax on $ " << income << " is $ " << tax << "." << endl;
		}
	}
	//Provide results to user
	
	system("pause");
	return 0;
}