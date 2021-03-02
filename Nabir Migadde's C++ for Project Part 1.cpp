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
Verison: 1.1

*/

int main() {
	//Declare all the variables in the program
	char computeAns;
	char computeAns2;
	string agentID;
	char modelType;
	char modelType2;
	float housePrice = 0;
	float housePrice2 = 0;
	float amouBasicCom = 0;
	float amouStandCom = 0;
	float amouLuxCom = 0;
	float amouBasicCom2 = 0;
	float amouStandCom2 = 0;
	float amouLuxCom2 = 0;
	int numBasic = 0;
	int numStand = 0;
	int numLux = 0;

	//Title of the program
	cout << "****************** Nabir Migadde Real Estate Commission Calculator ****************" << endl << "" << endl;

	//Ask user if they want to compute a commission
	cout << "Do you have a commission to compute? (1=yes, 0=no)     ";
	cin >> computeAns;
	cout << " " << endl;

	//If user says yes then ask user for information
	if (computeAns == '1') {
		cout << "Please enter the Real Estate Agent ID:     "; 
		cin >> agentID;
		cout << "Please enter model of house sold" << endl << "(B = Basic, S=Standard, L= Luxury):     "; //Ask user what category is the house
		cin >> modelType; 
		cout << "Please enter the selling price of house:     ";
		cin >> housePrice;

		// Compute commission based on category of the house
		if (modelType == 'B') {
			amouBasicCom = housePrice * 0.10f;
			numBasic = numBasic + 1;
		} else {
			if (modelType == 'S') {
				amouStandCom = housePrice * 0.15f;
				numStand = numStand + 1;
			}
			else {
				if (modelType == 'L') {
					amouLuxCom = housePrice * 0.20f;
					numLux = numLux + 1;
				} else {
				}
			}

		}

		//Show end results to the user
		cout << " " << endl;
		cout << "The commission for this sale for Real Estate Sales person ID " << agentID << " is: $" << (amouBasicCom + amouStandCom + amouLuxCom) << endl << " " << endl;
		
		//Ask if user wants to compute another commission
		cout << "Do you have another commission to compute? (1=yes, 0 = no)?     ";
		cin >> computeAns2;
		cout << " " << endl;

		//If so, then ask user again for additional information
		if (computeAns2 == '1') {
			cout << "Please enter the Real Estate Agent ID:     ";
			cin >> agentID;
			cout << "Please enter model of house sold" << endl << "(B = Basic, S=Standard, L= Luxury):     "; //Ask your what category is the house
			cin >> modelType2;
			cout << "Please enter the selling price of house:     ";
			cin >> housePrice2;

			//Again, calculate commission based on house category
			switch (modelType2) {
			case 'B':
				amouBasicCom2 = housePrice2 * 0.10f;
				numBasic = numBasic + 1;
				break;
			case 'S':
				amouStandCom2 = housePrice2 * 0.15f;
				numStand = numStand + 1;
				break;
			case 'L':
				amouLuxCom2 = housePrice2 * 0.20f;
				numLux = numLux + 1;
				break;
			}

			//Post end results to user and restate given agentID
			cout << " " << endl;
			cout << "The commission for this sale for Real Estate Sales person ID" << agentID << " is: $" << (amouBasicCom2 + amouStandCom2 + amouLuxCom2) << endl;
			cout << " " << endl;
		}
	} else { 
		cout << " " << endl;
	}

	//Display End of Run Report Screen
	cout << "********************** End of Run Report**********************" << endl;
	cout << "Total number of Standard houses commissions computed = " << numStand << endl;
	cout << "Total number of Luxury houses commissions computed = " << numLux << endl;
	cout << "Total number of Basic houses commissions computed = " << numBasic << endl;
	cout << "Total number of all commissions computed = " << (numStand + numLux + numBasic) << endl;
	cout << "Total amount of Standard House commissions computed = " << "$" << (amouStandCom + amouStandCom2) << endl;
	cout << "Total amount of Basic House commissions computed = " << "$" << (amouBasicCom + amouBasicCom2) << endl;
	cout << "Total amount of Luxury House commissions computed = " << "$" << (amouLuxCom + amouLuxCom2) << endl;
	cout << "Total amount of all commissions computed = " << "$"<< (amouStandCom + amouStandCom2 + amouBasicCom + amouBasicCom2 + amouLuxCom + amouLuxCom2) << endl;
	cout << "********************** End of Run Report **********************" << endl << " " << endl;
	// This shows user all the computations taken and for what category it belongs too
	// Also displays totals for computations and commissions 

	system("pause");
	return 0;

}