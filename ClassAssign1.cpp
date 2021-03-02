#include <iostream>
#include <string>
using namespace std;

/*
This program is designed to calculate the new total amount a user might have to pay when given the original amount and the tip.


Author: Nabir Migadde
Date: June 13, 2017
Time: 9:33pm


*/

int main() {
	//Declare the variables
	float origAmount;
	float tip;
	float totalAmount;

	//Get original amount from user
	cout << "What is the original amount?" << endl;
	cin >> origAmount;

	//Calculate tip and new total amount from original amount
	tip = origAmount * 0.15;
	totalAmount = origAmount + tip;

	//Display given information and results to user
	cout << "The original amount was: $" << origAmount << endl;
	cout << "The tip is: $" << tip << endl;
	cout << "The new total amount is: $" << totalAmount << endl;

	system("pause");
	return 0;
}