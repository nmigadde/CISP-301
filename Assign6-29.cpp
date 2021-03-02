#include <iostream>

using namespace std;

/* ~~~~~Purchase Calculator~~~~~~~~~

Hello, 
this program is designed to allow a cashier of a store to input 
an item and it's price, to get the following outputs:

• Price of each item purchased
• Total number of items purchased
• Grand total of all the purchases
• Most expensive purchase
• Least expensive purchase
• Average cost of items purchased

Author: Nabir Migadde
Date: 7/6/2017
Time: 2:31pm

Verison: 1.03.01

*/

int main(){
	//Declaration of Variables
	float priceArray[50];
	float itemPrice = 0;
	float minimum = 0;
	float maximum = 0;
	float total = 0;
	int count = 1;
	int itemResponse = 0;
	int i;
	char answer;

	//Greetings and Prompt user to use calculator
	cout << "***** Welcome to ABC store *****" << endl;
	cout << endl << "Do you have any item to scan? Enter (Y) to scan and (N) to generate the final invoice: ";
	cin >> answer;
	
	//If the answer is "yes" then calculation will take place
	if (answer == 'y' || answer == 'Y') {

		//Prompt user to start scanning items (-1 to exit)
		cout << endl << "Enter any number to begin scanning your items. Enter -1 to generate final invoice. ";
		cin >> itemResponse;

		//If user didn't exit then continue calculation
		if (itemResponse != -1) {
			while (itemResponse != -1) {
				if (itemResponse != -1) {
					//Prompt user of price and set to a subscript of the array
					cout << "Please enter the price for Item: $";
					cin >> itemPrice;
					priceArray[count] = itemPrice;
					count = count++;
					//Total is also calculated in this part
					total = total + priceArray[count - 1];
					cout << endl << "Enter any number to scan another item. Enter -1 to generate final invoice. ";
					cin >> itemResponse;
				}
			}

			//Set another counter for calculation of max. and min.
			i = 1;
			minimum = priceArray[1];
			maximum = priceArray[1];

			
			cout << endl << "********* Here are details of this purchase *********" << endl;

			//Set the max. and min. variable by checking each index of the array
			while (i <= count - 1) {
				if (priceArray[i] > maximum) {
					maximum = priceArray[i];
				}
				else {
					if (priceArray[i] < minimum) {
						minimum = priceArray[i];
					}
					else {
					}
				}
				//Display item numeber and price given by user
				cout << endl << "Item number : " << i << " ***** $" << priceArray[i] << endl;
				i = i + 1;
			}

			//Display all the end results to the user
			cout << endl << "Your bag contains total of " << (count - 1) << " items." << endl;
			cout << "Grand Total for this purchase is: $" << total << endl;
			cout << "The least expensive item in your bag is :$ " << minimum << endl;
			cout << "The most expensive item in your bag is : $" << maximum << endl;
			cout << "Your average item cost for this purchase is : $" << total / (count - 1) << endl << endl;

		} else {
			//If user exited without inputting an item or price (-1 in the begining) then display 0s.
			cout << endl << "********* Here are details of this purchase *********" << endl;
			cout << "Your bag contains total of " << "0" << " items." << endl;
			cout << "Grand Total for this purchase is: $" << "0" << endl;
			cout << "The least expensive item in your bag is :$ " << "0" << endl;
			cout << "The most expensive item in your bag is : $" << "0" << endl;
			cout << "Your average item cost for this purchase is : $" << "0" << endl << endl;
		}
	} else {
		//If user didn't want to do any calculations then display 0s. 
		cout << endl << "********* Here are details of this purchase *********" << endl;
		cout << "Your bag contains total of " << "0" << " items." << endl;
		cout << "Grand Total for this purchase is: $" << "0" << endl;
		cout << "The least expensive item in your bag is :$ " << "0" << endl;
		cout << "The most expensive item in your bag is : $" << "0" << endl;
		cout << "Your average item cost for this purchase is : $" << "0" << endl << endl;
	}

	system("pause");
	return 0;
}