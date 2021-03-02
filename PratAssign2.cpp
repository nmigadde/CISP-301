#include <iostream>
#include <string>
using namespace std;

int main(){
	float pNum;
	float nNum;
	float num=1;
	float sumOfPositiveNums = 0;
	float sumOfNegativeNums = 0;

	while (num != 0){
		cout << "Please enter a positive or negative number (0 = to exit): ";
		cin >> num;

		if (num > 0){
			pNum = num;
			sumOfPositiveNums = sumOfPositiveNums + pNum;
		}

		if (num < 0){
			nNum = num;
			sumOfNegativeNums = sumOfNegativeNums + nNum;
		}
	}

	if (sumOfNegativeNums != 0 || sumOfPositiveNums != 0){
		cout << endl << "The sum of the positive numbers are: " << sumOfPositiveNums << endl;
		cout << "The sum of the negative numbers are: " << sumOfNegativeNums << endl;
	}

	system("pause");
	return 0;
}