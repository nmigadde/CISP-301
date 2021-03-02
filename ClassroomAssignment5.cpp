#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	//Declartion of Variables
	int totalNumItems = 0;
	int j = 0;
	int response;
	string itemNam;
	int totalNum;
	int itemNumber;
	int itemPrice;
	int itemNum[10];
	float price[10];
	float totalPrice = 0.0;
	string itemName[10];
	string fileName = "results.txt";

	ofstream outfile; //Open file for writing
	outfile.open(fileName);

	cout << "Welcome to ABC Supermarket" << endl << endl; //Greetings
	cout << "Do you have an item to process? (1 = Yes , 0 = No)  "; //Prompt user if they would like to use the program
	cin >> response;

	while (response == 1){ //If user says 'yes' then program continues
		totalNumItems = totalNumItems + 1; //Calculation for total number of items
		cout << "Please enter the Item Name:  "; //Prompt user for item name
		cin >> itemName[j];
		cout << "Please enter the Item Number:  "; //Prompt user for item number
		cin >> itemNum [j];
		cout << "Please enter the price of the Item:  "; //Prompt user for price of item
		cin >> price[j];
		totalPrice = totalPrice + price[j]; //Calculation for total price

		outfile << itemName[j] << "  " << itemNum[j] << "  " << price[j] << endl; //Input all that information to a file

		j = j + 1; //counter
		cout << "Do you have another item to process? (1 = Yes , 0 = No)  "; //Prompt uer if they would like to do the process again
		cin >> response;
	}

	outfile.close(); //Close file for writing


	ifstream infile; //Open file for reading
	infile.open(fileName);

	while (!infile.eof()) {
		infile >> itemNam >> itemNumber >> itemPrice;
		cout << itemNam << " " << itemNumber << " " << itemPrice << endl; //Display information to user
		itemNam = " ";
		itemNumber = 0;
		itemPrice = 0;
		}

	infile.close(); //Close file for reading

	system("pause");
	return 0;
}