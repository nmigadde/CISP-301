#include <iostream>
#include <string>
#include<iomanip>

using namespace std;
/*
This program will compute the commissions for the various type of houses sold by the real estate agents.
The program will be run each month for an unknown number of agents. The program will produce a separate check
for each property sold during each month, meaning if a real estate agent sold 4 houses, they would receive 4 commission checks.
The real estate company has 3 categories of houses that pay a different commission rate. Each house category carries with it a
different description and commission rate as can be seen in the table below.

Category 		Type of House 		Commission Rate
“S” or “s” 		Standard 		15%
“B” or “b” 		Basic 			10%
“L” or “l” 		Luxury 			20%

The program will use the following input information:

Real estate agent ID (a 5-digit numeric identification number)
Category of home sold (“S”, “s’, “B”, “b”, “L” or “l”)
The selling price of the house.

The program will perform the following calculations and print the report:

Computes and prints the commission for the sales belonging to a real estate agent.
Keeps a running total of the number of houses sold for each house category.
Keeps a running total of the commissions for each housing category.
Outputs the running totals at the end of run

Author: Your name
Date: 06/27/2017


Revision information:


Revised by:
revision date:
*/
int main() {
	//Variable declaration and initalization
	int numberBasicHouses = 0;
	int numberStandardHouses = 0;
	int numberLuxuryHouses = 0;
	float commission = 0.00;
	float totalCommBasicHouse = 0.00;
	float totalCommStandardHouse = 0.00;
	float totalCommLuxuryHouse = 0.00;
	int answer;
	int agentID;
	char modelType;
	float sellingPrice;

	
	cout << "*********************** Your Name Real Estate Commission Calculator *********************"<<endl<<endl;
	cout << "Do you have a commission to compute? ";
	cout << " (1=yes, 0=no) ";
	cin >> answer;
	cout << endl<<endl;

	if (answer == 1 ) {
			cout << "Please enter the 5-digit Real estate agent ID: ";
			cin >> agentID; //need to do validation for invalid input e.g. non-numeric input
			cout << "Please enter model of house sold "<<endl;
			cout << "Enter: B = Basic, S = Standard, L = Luxury) : ";
			cin >> modelType;
			cout << "Please enter the selling price of house: $";
			cin >> sellingPrice;
			cout << endl;

			switch (modelType) {
			case 'b':
			case 'B':
				commission = sellingPrice * 0.10;
				cout << "The commission for this sale for Real Estate agent ID " << agentID << " is: $" << commission;
				//This variable will keep track the number of basic houses sold
				numberBasicHouses++; 
				//this variable will keep track of the total amount of commissions for basic houses
				totalCommBasicHouse = totalCommBasicHouse + commission;
				break;
			case 's':
			case 'S':
				commission = sellingPrice * 0.15;
				cout << "The commission for this sale for Real Estate agent ID " << agentID << " is: $" << commission;
				//This variable will keep track the number of standard houses sold
				numberStandardHouses++;
				//this variable will keep track of the total amount of commissions for Standard houses
				totalCommStandardHouse = totalCommStandardHouse + commission;
				break;

			case 'l':
			case 'L':
				commission = sellingPrice * 0.20;
				cout << "The commission for this sale for Real Estate agent ID " << agentID << " is: $" << commission;
				//This variable will keep track the number of luxuary houses sold
				numberLuxuryHouses++;
				//this variable will keep track of the total amount of commissions for luxuary houses
				totalCommLuxuryHouse = totalCommLuxuryHouse + commission;
				break;
			}

			cout << endl<<endl;
			cout << "Do you have a commission to compute? ";
			cout << " (1=yes, 0=no) ";
			cin >> answer;
			cout << endl << endl;
		}

		//The code to display the final report

		cout << "*************************** End of Run Report***************************\n";
		cout << "Total number of Basic Houses commissions computed:....... " << numberBasicHouses << endl;
		cout << "Total number of Standard Houses commissions computed:.... " << numberStandardHouses << endl;
		cout << "Total number of Luxury Houses commissions computed:...... " << numberLuxuryHouses << endl;
		cout << "Total number of all commissions computed:................ " << numberBasicHouses + numberStandardHouses + numberLuxuryHouses << endl;
		//setprecision and fixed function from iomanip library are used to format decimal output
		cout << "Total amount of Basic House commissions computed:........ $" << setprecision(2)<<fixed << totalCommBasicHouse << endl;
		cout << "Total amount of Standard House commissions computed:..... $" << setprecision(2) << fixed << totalCommStandardHouse << endl;
		cout << "Total amount of Luxury House commissions computed:....... $" << setprecision(2) << fixed << totalCommLuxuryHouse << endl;
		cout << "Total amount of all commissions computed:................ $" << setprecision(2) << fixed << totalCommBasicHouse + totalCommStandardHouse + totalCommLuxuryHouse << endl;
		cout << "*************************** End of Run Report ***************************\n\n";

	system("pause");
	return 0;
}