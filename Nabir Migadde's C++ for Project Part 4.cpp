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

Verison: 1.3
~Part 3 printing and sorting arrays into lists
Revised by: Nabir Migadde
Revision date: July 13, 2017

Verison: 1.4
~Part 4 adding functions and subprograms
Revised by: Nabir Migadde
Revision date: July 20, 2017
*/

void calculations(char mType, float hPrice, float & amouBCom, int & numB, float & comm, int & p, float & totalC, float & totalBC, float & amouSCom, int & numS, float & totalSC, float & amouLCom, int & numL, float & totalLC);
/*
What it does: Calculations for all types of Commissions
Passed: Model Types, House Prices, Commissions, Amount of each type, Total Commission, Total of each type, Counter(j), and the number of each type
Return: none
*/
float HousePriceResponse(float price);
/*
What it does: Prompts user for house selling price for Commission
Passed: House Price
Return: Input of House Price
*/
char ModelTypeResponse(char type);
/*
What it does: Prompts user for house model type for Commission
Passed: Model Type
Return: Input of Model Type
*/
int AgentIDResponse(int ID);
/*
What it does: Prompts user for agent ID for Commission
Passed: Agent ID
Return: Input of Agent ID
*/
int ComputationAns(int & answer);
/*
What it does: Prompts user if they could like to use the calculator
Passed: ComputeAns
Return: The answer the user gives
*/
void BigSmallCommissions(float max, float min, float average);
/*
What it does: Displays to user the Maximum, Minimum and Average Commission based off given information
Passed: max, min, average Comms
Return: Large, Small, Average Commissions
*/

int main() {
	//Declaration of Variables
	char modelType[10];
	char tempModelType;
	int computeAns = 0;
	int agentID[10];
	int tempAgentID;
	int numBasic = 0;
	int numStand = 0;
	int numLux = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	float temp = 0.0;
	float smallest = 0.0;
	float housePrice[10];
	float tempHousePrice;
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

	computeAns = ComputationAns(computeAns); //Function for asking user if they would like to use the calculator
	
	//If user says "Yes" then calculations will continue
	while (computeAns == 1) {

		agentID[j] = AgentIDResponse(agentID[j]); //Fuction for inputing agent ID number

		if (agentID[j] >= 10000 && agentID[j] <= 99999) { // If given Agent ID is in given parameters then calculations will continue

			modelType[j] = ModelTypeResponse(modelType[j]); //Fuction for inputing house model type for commission

			if (modelType[j] == 'b' || modelType[j] == 'B' || modelType[j] == 's' || modelType[j] == 'S' || modelType[j] == 'l' || modelType[j] == 'L') { // If user enters correct house model type then calculations will continue

				housePrice[j] = HousePriceResponse(housePrice[j]); //Fuction for inputing house selling price for commission

				if (housePrice[j] > 0 && housePrice[j] < 500000000) { // If house price is in given parameters then calculations will continue

					//Calculation Fuction for Commissions
					calculations(modelType[j], housePrice[j], amouBasicCom, numBasic, commissions[j], j, totalComm, totalBasicComm, amouStandCom, numStand, totalStandComm, amouLuxCom, numLux, totalLuxComm);

					//Display commission to the user including given agentID
					cout << endl << "The commission for agent ID " << agentID[j - 1] << " of commission #" << (j) << " is: $" << commissions[j - 1] << endl;
				} else {
					cout << endl << "Invalid house price. Please try again." << endl; // If user enters something outside the parameters
				}
			} else {
				cout << endl << "Invaild house model type. Please try again." << endl; // If user enters a character other then those stated
			}
		} else {
			cout << endl << "Invalid Real Estate Agent ID. Please try again." << endl; // If user enters something outside the parameters (Not a 5-digit number)
		}

		averageComm = totalComm / (j); //Calculation of the Average Commission based on Total Commissions

		cout << endl << "Do you have another commission to compute? (1 = yes, 0 = no)?     "; // Ask user if they would like to calculate another commission
		cin >> computeAns;
		cout << " " << endl;

		//Validate for wrong computeAns
		while (computeAns != 0 && computeAns != 1) {
			cout << "Invalid computation answer. Please try again." << endl;
			cout << endl << "Do you have another commission to compute? (1 = yes, 0 = no)?     ";
			cin >> computeAns;
		}

	}

	i = 0; //Variable used as a counter
	minComm = commissions[0]; 
	maxComm = commissions[0];

	//Setting variables for the maximum and minimum commissions
	while (i <= j-1) {
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

	//Setup the counter to be easier to use
	j = j - 1;
	m = j;

	//Display End of Run Report Screen
	if (housePrice[0] > 0.0 && housePrice[0] < 500000000.0) {
		cout << "********************** End of Run Report**********************" << endl;
		cout << endl << "               Unsorted by Commissions" << endl << endl;
		cout << " Agent ID    House Type    Selling Price    Commission" << endl;

		//Display the list of given information and resulting commissions
		while (j >= 0 && j <= 9) {
			cout << "  " << agentID[j] << "           " << modelType[j] << "           $" << housePrice[j] << "           $" << commissions[j] << endl;
			j = j - 1;
		}
		//Set new variable 'swap' to false for bubble sort
		bool swap = false;
		//Loop for bubble sort
		while (swap == false) {
			swap = true; //'swap' is acting as the flag and is immediately set to 'true' when the loop begins
			int k = 0; //Set new variable 'k' to 0
			while (k <= (m - 1)) {
				//When comparing indexes if the next index is less than the previous then sort
				if (commissions[k] > commissions[k + 1]) {
					temp = commissions[k];
					commissions[k] = commissions[k + 1];
					commissions[k + 1] = temp;

					tempModelType = modelType[k];
					modelType[k] = modelType[k + 1];
					modelType[k + 1] = tempModelType;

					tempHousePrice = housePrice[k];
					housePrice[k] = housePrice[k + 1];
					housePrice[k + 1] = tempHousePrice;

					tempAgentID = agentID[k];
					agentID[k] = agentID[k + 1];
					agentID[k + 1] = tempAgentID;

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
			cout << "  " << agentID[k] << "           " << modelType[k] << "           $" << housePrice[k] << "           $" << commissions[k] << endl;
			k = k + 1;
		}
		cout << endl; //Spacing for formatting

		BigSmallCommissions(maxComm, minComm, averageComm); //Function to display Maximum, Minimum, and Average Commissions

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




	

	void calculations(char mType, float hPrice, float & amouBCom, int & numB, float & comm, int & p, float & totalC, float & totalBC, float & amouSCom, int & numS, float & totalSC, float & amouLCom, int & numL, float & totalLC)
	{
		//Calculations based on house model type
		switch (mType) {
		case 'b':
		case 'B':
			amouBCom = hPrice * 0.10f;
			numB = numB + 1;
			comm = amouBCom;
			p = p + 1;
			totalC = totalC + amouBCom;
			totalBC = totalBC + amouBCom;
			break;
		case 's':
		case 'S':
			amouSCom = hPrice * 0.15f;
			numS = numS + 1;
			comm = amouSCom;
			p = p + 1;
			totalC = totalC + amouSCom;
			totalSC = totalSC + amouSCom;
			break;
		case 'l':
		case 'L':
			amouLCom = hPrice * 0.20f;
			numL = numL + 1;
			comm = amouLCom;
			p = p + 1;
			totalC = totalC + amouLCom;
			totalLC = totalLC + amouLCom;
			break;
		}
	}

	float HousePriceResponse(float price)
{
	cout << "Please enter the selling price of house (less than 500 million):     "; //Ask user for house price
	cin >> price;
	return price;
}

char ModelTypeResponse(char type)
{
	cout << "Please enter model of house sold" << endl << "(B = Basic, S=Standard, L= Luxury):     "; //Ask user what category is the house
	cin >> type;

	return type;
}

int AgentIDResponse(int ID)
{
	cout << "Please enter the Real Estate Agent ID (5 - Digit Number):     "; // Ask user for Agent ID
	cin >> ID;

	return ID;
}

int ComputationAns(int & answer)
{
	//Ask user if they want to compute a commission
	cout << "Do you have a commission to compute? (1=yes, 0=no)     ";
	cin >> answer;
	cout << " " << endl;

	//If user inputs something other than 0 or 1 then the user will be asked to re-input  
	while (answer != 1 && answer != 0) {
		cout << "Invalid answer. Please try again." << endl;
		cout << endl << "Do you have a commission to compute? (1=yes, 0=no)     ";
		cin >> answer;
		cout << " " << endl;
	}

	return answer;
}

void BigSmallCommissions(float max, float min, float average){
	//Display Commissions 
	cout << "High Commission is: $" << max << endl;
	cout << "Low Commission is: $" << min << endl;
	cout << "Average Commission is: $" << average << endl << endl;
}


