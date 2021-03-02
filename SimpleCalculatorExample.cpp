#include <iostream>
#include <string>
using namespace std;


int main(){
	int operand1;
	int operand2;
	int operation;

	cout << "Enter First number: ";
	cin >> operand1;
	cout << "Enter Second number: ";
	cin >> operand2;

	cout << "Please Enter" << endl;
	cout << "1) To Add" << endl;
	cout << "2) To Multiply" << endl;
	cout << "3) To Divide" << endl;
	cout << "Enter operation you want to perform: ";
	cin >> operation; 

	switch (operation){
	case 1:
		cout << "The Sum of " << operand1 << " and " << operand2 << " is: " << (operand1 + operand2) << endl;
		break;
	case 2:
		cout << "The Multiplication of " << operand1 << " and " << operand2 << " is: " << (operand1 * operand2) << endl;
		break;
	case 3:
		cout << "The Division of " << operand1 << " and " << operand2 << " is: " << (operand1 / operand2) << endl;
		break;
	default: 
		cout << "Can't Complete." << endl;
		break;
	}

	/*

	or

	if (operation == 1) {
		cout << "The Sum of " << operand1 << " and " << operand2 << " is: " << (operand1 + operand2) << endl;
	} else
	if (operation == 2) {
		cout << "The Multiplication of " << operand1 << " and " << operand2 << " is: " << (operand1 * operand2) << endl;
	} else
	if (operation == 3) {
		cout << "The Division of " << operand1 << " and " << operand2 << " is: " << (operand1 / operand2) << endl;
	}
	
	*/



	system("pause");
	return 0;
}