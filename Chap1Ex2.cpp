#include <iostream>
#include <string>
using namespace std;

int main() {
	float C;
	float F;
	cout << "Enter a temperature in degrees Celsius: ";
	cin >> C;
	F = (9 / 5) * C + 32;
	cout << "Temperature in degrees Celsius: " << C << endl;
	cout << "Temperature in degrees Fahrenheit :" << F << endl;


	system("pause");
	return 0;
}