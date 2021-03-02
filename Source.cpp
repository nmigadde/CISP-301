#include<iostream>
#include<string>
using namespace std; 

int main(){
	string firstName;
	cout << "Please enter your first name:";
	cin >> firstName;

	string lastName;
	cout << "Please enter your last name:";
	cin >> lastName;

	cout << "Welcome to CISP 301, " << firstName << " " << lastName << ".";
	cout << endl;
	system("pause");
	return 0;
}