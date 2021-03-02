#include <iostream>
#include<string>
using namespace std;


void printWelcomeMessage();
//Change the function to accept three parameters of type int
int calculateResults(int op, int num1, int num2);

int main(){
	int userChoice;
	int test;
	

	printWelcomeMessage();

	cout << "Please enter an operation you want to perform (1 = to add, 2 = to subtract, 3 = to multiply): " << endl;
	cin >> userChoice;
	//get the user input for two additional parameters

	int Num1, Num2;
	
	cout << "Please enter first number: ";
	cin >> Num1;
	cout << "Please enter second number: ";
	cin >> Num2;

	//Call the function with correct parameters
	test = calculateResults(userChoice, Num1, Num2);
	//Print the result 
	cout << " The result is: " << test << endl;
	system("pause");
	return 0;
}

void printWelcomeMessage(){
	cout << "******Welcome to CISP 301******* " << endl;
}

//Change the function to reflect the defination of function 
int calculateResults(int op, int num1, int num2){
	int result = 0;
	switch (op){
	case 1:
		cout << "Performing Addition Operation " << endl;
		result = num1 + num2;
		break;
	case 2:
		cout << "Performing Subtract Operation " << endl;
		result = num1 - num2;
		break;
	case 3:
		cout << "Performing Multiply Operation " << endl;
		result = num1 * num2; 
		break;
	default:
		cout << "Operation not supported " << endl;
	}
	return result;
}