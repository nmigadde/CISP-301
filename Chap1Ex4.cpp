#include <iostream>
#include <string>
using namespace std;

int main() {
	string FirstName;
	string LastName;
	string FullName;
	char MiddleInitial;

	cout << "Enter the first name: ";
	cin >> FirstName;
	cout << "Enter the middle initial: ";
	cin >> MiddleInitial;
	cout << "Enter the last name: ";
	cin >> LastName;

	FullName = FirstName + " " + MiddleInitial + ". " + LastName;

	cout << "The full name is: " << FullName << endl;

	system("pause");
	return 0;
}