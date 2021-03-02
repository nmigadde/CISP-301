#include <iostream>
#include <string>

using namespace std;

/*
~~~~~~~~~~~~~~ Commission Calculator ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

This program creates 4 arrays, and sorts the commission array using the bubble sort algorithm.

The following arrays are:
Int ID[5]
Float sellingPrice[5]
Float Commission[5]
String houseType[5]

The program also prints both unsorted arrays and sorted arrays.

Author: Nabir Migadde
Time: 8:16 PM
Date: July 13, 2017 

Verison: 1.0

*/

int main() {
	//Declaration of Variables
	int computeAns = 1;
	int j = 0;
	int k;
	int m;
	int ID[5];
	int tempID;
	float temp;
	float Commission[5];
	float sellinPrice[5];
	float tempSellingPrice;
	char houseType[5];
	char tempHouseType;
	
	//Prompt to user detailing what the program is
	cout << "Hello! This is a Commission Calculator." << endl << endl;
	
	while (computeAns == 1) {
			cout << "Please enter the Real Estate Agent ID (5 - Digit Number):     "; // User is asked for Agent ID Number 
			cin >> ID[j];

			cout << "Please enter model of house sold" << endl << "(B = Basic, S=Standard, L= Luxury):     "; // User is asked the model of the house to be calculated
			cin >> houseType[j];

			cout << "Please enter the selling price of house (less than 500 million):     "; // User is asked what the selling price of the house is
			cin >> sellinPrice[j];

			//Calculation of Commission based on house type
			switch (houseType[j]) {
			case 'b':
			case 'B':
				Commission[j] = sellinPrice[j] * 0.10f;
				j = j + 1;
				break;
			case 's':
			case 'S':
				Commission[j] = sellinPrice[j] * 0.15f;
				j = j + 1;
				break;
			case 'l':
			case 'L':
				Commission[j] = sellinPrice[j] * 0.20f;
				j = j + 1;
				break;
			}

			//Display the result to the user
			cout << endl << "The commission for agent ID " << ID[j-1] << " of commission #" << (j) << " is: $" << Commission[j-1] << endl;

			//Ask user if they would like to calculate another commission
			cout << endl << "Do you have another commission to compute? (1 = yes, 0 = no)?     ";
			cin >> computeAns;
			cout << " " << endl;
	}

	//Set variable 'm' with the value of the total amount of filled indexes in every array. (Ex: j=5 but there are only 4 filled indexes.... then 'm' is that amount.)
	j = j - 1;
	m = j;

	//Display list of Unsorted Results and Inputs related as parrallel arrays to user
	cout << endl << "               Unsorted by Commissions" << endl << endl;
	cout << " Agent ID    House Type    Selling Price    Commission" << endl;

	//Loop to display the Unsorted Information
	while (j >= 0 && j <= 4) {
		cout << "  " << ID[j] << "           " << houseType[j] << "           $" << sellinPrice[j] << "           $" << Commission[j] << endl;
		j = j - 1;
	}

	//Set new variable 'swap' to false for bubble sort
	bool swap = false;

	//Loop for bubble sort
	while (swap == false) {
		swap = true; //'swap' is acting as the flag and is immediately set to 'true' when the loop begins
		int k = 0; //Set new variable 'k' to 0
		while (k <= (m-1)) {
			//When comparing indexes if the next index is less than the previous then sort
			if (Commission[k] > Commission[k + 1]) {
				temp = Commission[k];
				Commission[k] = Commission[k + 1];
				Commission[k + 1] = temp;

				tempHouseType = houseType[k];
				houseType[k] = houseType[k + 1];
				houseType[k + 1] = tempHouseType;

				tempSellingPrice = sellinPrice[k];
				sellinPrice[k] = sellinPrice[k + 1];
				sellinPrice[k + 1] = tempSellingPrice;

				tempID = ID[k];
				ID[k] = ID[k + 1];
				ID[k + 1] = tempID;

				swap = false; //Set the flag back to false to continue with this loop
			}
			k = k + 1; //'k' is the counter for this loop
		}
	}

	//Display all the given information and final calculations in a sorted list to the user based on commissions in an accending order
	cout << endl << "                Sorted by Commissions" << endl << endl;
	cout << " Agent ID    House Type    Selling Price    Commission" << endl;
	k = 0;

	//Loop to display the information
	while (k <= (m)) {
		cout << "  " << ID[k] << "           " << houseType[k] << "           $" << sellinPrice[k] << "           $" << Commission[k] << endl;
		k = k + 1;
	}

	cout << endl; //Spacing for formatting

	system("pause");
	return 0;
}