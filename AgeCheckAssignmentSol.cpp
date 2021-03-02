#include <iostream>
using namespace std;
/*Write a program that check person's age and print following messages based on person's eligibility 
Age less than 18 
You are too young for adult acticities.
Age 18 or more but less than 21
You are eligible to vote
Age 18 or more but less than 25
You are eligible to vote
You are eligible to buy alchohal.
Age 25 or more 
You are eligible to vote
You are eligible to buy alchohal.
You are eligible to buy Toboco products.
*/
int main() {
	int age = 0;
	cout << "Please enter your age:";
	cin >> age;
	//Your solution goes here
	if (age >= 18) {
		cout << "You are eligible to vote" << endl;
	}if (age >= 21) {
		cout << "You are eligible to buy alchohal." << endl;
	} if (age >= 25) {
		cout << "You are eligible to buy Toboco products." << endl;
	}
	else if(age<18) {
		cout << "You are too young for adult acticities." << endl;
	}
	system("pause");
	return 0;
}