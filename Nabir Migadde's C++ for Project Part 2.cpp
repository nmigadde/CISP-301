#include <iostream>
#include <string>
using namespace std;
/*
~~~~~~~~~~~~~~~~~~~~~~~~~Nabir Migadde Real Estate Commission Calculator~~~~~~~~~~~~~~~~~~~~~~~~~~

This program is designed to calculate what a real estate company will have to pay for commission 
to their real estate agents based on the number of houses sold by each real estate agent.
The program will be run each month for an unknown number of agents. A real estate agent will
receive a separate check for each property sold during each month, meaning if a sales person
sold 4 houses, they would receive 4 commission checks. The real estate company has 3
categories of houses that pay a different commission rates. Each house category carries with it a
different description and commission rate as can be seen in the table below.


This program:

Asks the user for the Real estate agent ID (a 5-digit numeric identification number), the
category of home that was sold (“S”, “s’, “B”, “b”, “L” or “l”) and the selling price of the
house.
~~ Computes and prints the commission for that sale belonging to that real estate agent.
~~ Keeps a running total of the number of houses sold for each house category.
~~ Keeps a running total of the commissions for each housing category.
~~ Outputs the running totals at the end of run as shown below

Author: Nabir Migadde
Date: June 22, 2017
Time: 6:22pm

Revision Information: 

Verison: 1.1
~Part 1 with the backbone of the whole program
Revised by: Nabir Migadde
Revision date: June 22, 2017

Verison: 1.2
~Part 2 adding loops and validation, also use arrays
Revised by: Nabir Migadde
Revision date: July 6, 2017
*/

int main() {
	//Declaration of Variables
	char modelType = 'n';
	int computeAns = 0;
	int agentID = 00000;
	int count = 1;
	int numBasic = 0;
	int numStand = 0;
	int numLux = 0;
	int i = 0;
	float housePrice = 0;
	float amouBasicCom = 0;
	float amouStandCom = 0;
	float amouLuxCom = 0;
	float commissions[10];
	float maxComm = 0;
	float minComm = 0;
	float totalComm = 0;
	float averageComm = 0;
	float totalBasicComm = 0;
	float totalStandComm = 0;
	float totalLuxComm = 0;
	
	//Title of the program
	cout << "****************** Nabir Migadde Real Estate Commission Calculator ****************" << endl << "" << endl;

	//Ask user if they want to compute a commission
	cout << "Do you have a commission to compute? (1=yes, 0=no)     ";
	cin >> computeAns;
	cout << " " << endl;

	//If user inputs something other than 0 or 1 then the user will be asked to re-input  
	while (computeAns != 1 && computeAns != 0) {
		cout << "Invalid answer. Please try again." << endl;
		cout << endl << "Do you have a commission to compute? (1=yes, 0=no)     ";
		cin >> computeAns;
		cout << " " << endl;
	}
	
	//If user says "Yes" then calculations will continue
	while (computeAns == 1) {
		cout << "Please enter the Real Estate Agent ID (5 - Digit Number):     "; // Ask user for Agent ID
		cin >> agentID;

		if (agentID >= 10000 && agentID <= 99999) { // If given Agent ID is in given parameters then calculations will continue
			cout << "Please enter model of house sold" << endl << "(B = Basic, S=Standard, L= Luxury):     "; //Ask user what category is the house
			cin >> modelType;
			if (modelType == 'b' || modelType == 'B' || modelType == 's' || modelType == 'S' || modelType == 'l' || modelType == 'L') { // If user enters correct house model type then calculations will continue
				cout << "Please enter the selling price of house (less than 500 million):     "; //Ask user for house price
				cin >> housePrice;
				if (housePrice > 0 && housePrice < 500000000) { // If house price is in given parameters then calculations will continue
					//Calculations based on house model type
					switch (modelType) { 
					case 'b':
					case 'B':
						amouBasicCom = housePrice * 0.10f;
						numBasic = numBasic + 1;
						commissions[count] = amouBasicCom;
						count = count + 1;
						totalComm = totalComm + amouBasicCom;
						totalBasicComm = totalBasicComm + amouBasicCom;
						break;
					case 's':
					case 'S':
						amouStandCom = housePrice * 0.15f;
						numStand = numStand + 1;
						commissions[count] = amouStandCom;
						count = count + 1;
						totalComm = totalComm + amouStandCom;
						totalStandComm = totalStandComm + amouStandCom;
						break;
					case 'l':
					case 'L':
						amouLuxCom = housePrice * 0.20f;
						numLux = numLux + 1;
						commissions[count] = amouLuxCom;
						count = count + 1;
						totalComm = totalComm + amouLuxCom;
						totalLuxComm = totalLuxComm + amouLuxCom;
						break;
					}
					//Display commission to the user including given agentID
					cout << endl << "The commission for agent ID " << agentID << " of commission #" << (count - 1) << " is: $" << commissions[count - 1] << endl;

				} else {
					cout << endl << "Invalid house price. Please try again." << endl; // If user enters something outside the parameters
				}
			} else {
				cout << endl << "Invaild house model type. Please try again." << endl; // If user enters a character other then those stated
			}
		} else {
			cout << endl << "Invalid Real Estate Agent ID. Please try again." << endl; // If user enters something outside the parameters (Not a 5-digit number)
		}

		averageComm = totalComm / (count-1); //Calculation of the Average Commission based on Total Commissions

		cout << endl << "Do you have another commission to compute? (1 = yes, 0 = no)?     "; // Ask user if they would like to calculate another commission
		cin >> computeAns;
		cout << " " << endl;
	}

	i = 1; //Variable used as a counter
	minComm = commissions[1]; 
	maxComm = commissions[1];

	//Setting variables for the maximum and minimum commissions
	while (i <= count - 1) {
		if (commissions[i] > maxComm) {
			maxComm = commissions[i];
		}
		else {
			if (commissions[i] < minComm) {
				minComm = commissions[i];
			}
			else {
			}
		}
		i = i + 1;
	}

	//Display End of Run Report Screen
	if (housePrice > 0 && housePrice < 500000000) {
		cout << "********************** End of Run Report**********************" << endl;
		cout << "High Commission is: $" << maxComm << endl;
		cout << "Low Commission is: $" << minComm << endl;
		cout << "Average Commission is: $" << averageComm << endl << endl;
		cout << "Total number of Standard houses commissions computed = " << numStand << endl;
		cout << "Total number of Luxury houses commissions computed = " << numLux << endl;
		cout << "Total number of Basic houses commissions computed = " << numBasic << endl;
		cout << "Total number of all commissions computed = " << (numStand + numLux + numBasic) << endl;
		cout << "Total amount of Standard House commissions computed = " << "$" << totalStandComm << endl;
		cout << "Total amount of Basic House commissions computed = " << "$" << totalBasicComm << endl;
		cout << "Total amount of Luxury House commissions computed = " << "$" << totalLuxComm << endl;
		cout << "Total amount of all commissions computed = " << "$" << totalComm << endl;
		cout << "********************** End of Run Report **********************" << endl << " " << endl;
	} // This shows user all the computations taken and for what category it belongs too
	// Also displays totals for computations and commissions 

	//This is a confirmation of termination of the program
	if (computeAns == 0) {
		cout << endl << "Good Bye!!!" << endl << endl; // A nice farewell message to the user
	}
	
	system("pause");
	return 0;
}