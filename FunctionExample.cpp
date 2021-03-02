#include <iostream>
#include<string>
using namespace std;


void printWelcomeMessage();

int calculateResults(int op);

int main(){
	int userChoice;
	int test;

	printWelcomeMessage();

	cout << "Please enter an operation you wants to perform " << endl;
	cin >> userChoice;

	test = calculateResults(userChoice);

	char c; cin >> c;
	return 0;
}

void printWelcomeMessage(){
	cout << "******Welcome to CISP 301******* " << endl;
}

int calculateResults(int userChoice){
	int num1, num2;
	int result =0;
	cout << "Please enter first number: ";
	cin >> num1;
	cout << "Please enter second number: ";
	cin >> num2;
	switch (userChoice){
	case 1:
		cout << "Performing Addition Operation " << endl;
		break;
	case 2:
		cout << "Performing Subtract Operation " << endl;
		break;
	case 3:
		cout << "Performing Multiply Operation " << endl;
		break;
	default:
		cout << "Operation not supported " << endl;
	}
	return result;
}