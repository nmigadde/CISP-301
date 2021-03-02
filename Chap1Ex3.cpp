#include <iostream>
#include <string>
using namespace std;

int main() {
	float Interest;
	float Principal;
	float Rate;
	float FinalValue;
	int Time;

	cout << "Enter the amount to be invested: " << endl;
	cin >> Principal;
	cout << "Enter the rate of interest as a decimal: " << endl;
	cin >> Rate;
	cout << "Enter the term of the investment (in years): " << endl;
	cin >> Time;

	Interest = Principal * Rate * Time;
	FinalValue = Principal + Interest;

	cout << "The amount invested: " << Principal << " dollars" << endl;
	cout << "The rate of interest: " << Rate * 100 << "%" << endl;
	cout << "The term of the investment: " << Time << " years" << endl;
	cout << "The future value: " << FinalValue << " dollars" << endl;

	system("pause");
	return 0;
}