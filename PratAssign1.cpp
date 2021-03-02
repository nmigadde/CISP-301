#include <iostream>
#include <string>
using namespace std;

int main() {
	float positiveNumber = 1;
	float max = 0;
	
	while (positiveNumber != 0){
		cout << "Please enter a positive number (0 = to exit): ";
		cin >> positiveNumber; 
		
		if (positiveNumber<0){
			cout << "You have entered a negative number." << endl;
		}

		if (positiveNumber > max){
			max = positiveNumber;
		}
	}

	if (max != 0){
		cout << "The largest number in the list of positive numbers you've enter is: " << max << endl;
	}


	system("pause");
	return 0;
}