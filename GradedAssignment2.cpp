#include <iostream>
#include <string>
using namespace std;

/* ~~~~~~~~~ Average Test Calculator Program ~~~~~~~~~~~~~~
This program is designed to calculate an average based on 
three test scores given by the user. This program also 
calculates the overall class average of the three scores
given the amount of students. 

Author: Nabir Migadde
For: Alberta and her Business class at SCC

Verison: 1.02
Date: June 29, 2017
Time: 3:32pm
*/

int main(){
	//Declaration of Variables
	string student;
	char choice;
	int test = 0;
	float testNum = 0;
	float testScore = 0;
	float testScoreSum = 0;
	float testAverage = 0;
	float classScoreSum = 0;
	float classAverage = 0;

	// Initial Prompt asking if user wants to use calculator
	cout << "~~~~~~~~~~~~~~~~~~~ Average Test Calculator ~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
	cout << "Would you like to calculate the average tests score? (Y=Yes, N=No)     ";
	cin >> choice;

	//If user says "yes" then the calculation will proceed
	if (choice == 'y' || choice == 'Y') {
		while (choice == 'y' || choice == 'Y') {

			//Prompt user for name of student
			cout << endl << "Enter name of a student (Enter 'done' once finished):     ";
			cin >> student;
			cout << endl;

			//Reset the sum of the score of the tests for every iteration
			testScoreSum = 0;

			//If user enters a name then calculation will proceed
			if (student != "done") {

				//User will input scores for the three tests
				for (test = 1; test <= 3; test++) {
					testNum = testNum + 1;
					cout << "Enter score for test #" << test << " (Whole Number Only)" << ": %";
					cin >> testScore;
					testScoreSum = testScoreSum + testScore;
					classScoreSum = classScoreSum + testScore;
				}
				
				//The results will be displayed to the user
				testAverage = testScoreSum / 3;
				cout << endl << "The average test score for " << student << " is %" << testAverage << endl;
				classAverage = classScoreSum / testNum;
				cout << "The class average for the three tests is %" << classAverage << "." << endl;

				//Prompt user for another calculation
				cout << endl << "Do you want to enter another student? (Y=Yes, N=No)     ";
				cin >> choice;
			} 
			
			//If user enters "done" then calculator program will terminate or no calculation will take place
			else {
				choice = 'n';
			}
		}

		//Once all calculations are done, the calculator program will terminate
		cout << endl << "Goodbye!" << endl << endl;
	} 

	//If user says "no" then no calculation will take place 
	else {
		cout << endl << "Goodbye!" << endl << endl;
	}
	
	system("pause");
	return 0;
}