#include <iostream>
#include <string>
using namespace std;


int main() {

	char computeAns;
	char computeAns2;
	string agentID;
	char modelType;
	char modelType2;
	float housePrice = 0;
	float housePrice2 = 0;
	float amouBasicCom = 0;
	float amouStandCom = 0;
	float amouLuxCom = 0;
	float amouBasicCom2 = 0;
	float amouStandCom2 = 0;
	float amouLuxCom2 = 0;
	int numBasic = 0;
	int numStand = 0;
	int numLux = 0;

	cout << "****************** Nabir Migadde Real Estate Commission Calculator ****************" << endl << "" << endl;

	cout << "Do you have a commission to compute? (1=yes, 0=no)     ";
	cin >> computeAns;
	cout << " " << endl;

	if (computeAns == '1') {
		cout << "Please enter the Real Estate Agent ID:     ";
		cin >> agentID;
		cout << "Please enter model of house sold" << endl << "(B = Basic, S=Standard, L= Luxury):     ";
		cin >> modelType; 
		cout << "Please enter the selling price of house:     ";
		cin >> housePrice;

		if (modelType == 'B') {
			amouBasicCom = housePrice * 0.10f;
			numBasic = numBasic + 1;
		} else {
			if (modelType == 'S') {
				amouStandCom = housePrice * 0.15f;
				numStand = numStand + 1;
			}
			else {
				if (modelType == 'L') {
					amouLuxCom = housePrice * 0.20f;
					numLux = numLux + 1;
				} else {
				}
			}

		}

		cout << " " << endl;
		cout << "The commission for this sale for Real Estate Sales person ID " << agentID << " is: $" << (amouBasicCom + amouStandCom + amouLuxCom) << endl << " " << endl;
		
		cout << "Do you have another commission to compute? (1=yes, 0 = no)?     ";
		cin >> computeAns2;
		cout << " " << endl;

		if (computeAns2 == '1') {
			cout << "Please enter the Real Estate Agent ID:     ";
			cin >> agentID;
			cout << "Please enter model of house sold" << endl << "(B = Basic, S=Standard, L= Luxury):     ";
			cin >> modelType2;
			cout << "Please enter the selling price of house:     ";
			cin >> housePrice2;

			if (modelType2 == 'B') {
				amouBasicCom2 = housePrice2 * 0.10f;
				numBasic = numBasic + 1;
			} else {
				if (modelType2 == 'S') {
					amouStandCom2 = housePrice2 * 0.15f;
					numStand = numStand + 1;
				} else {
					if (modelType == 'L') {
						amouLuxCom2 = housePrice2 * 0.20f;
						numLux = numLux + 1;
					} else {
					}
				}
			} 

			cout << " " << endl;
			cout << "The commission for this sale for Real Estate Sales person ID" << agentID << " is: $" << (amouBasicCom2 + amouStandCom2 + amouLuxCom2) << endl;
			cout << " " << endl;
		}
	} else { 
		cout << " " << endl;
	}

	cout << "********************** End of Run Report**********************" << endl;
	cout << "Total number of Standard houses commissions computed = " << numStand << endl;
	cout << "Total number of Luxury houses commissions computed = " << numLux << endl;
	cout << "Total number of Basic houses commissions computed = " << numBasic << endl;
	cout << "Total number of all commissions computed = " << (numStand + numLux + numBasic) << endl;
	cout << "Total amount of Standard House commissions computed = " << "$" << (amouStandCom + amouStandCom2) << endl;
	cout << "Total amount of Basic House commissions computed = " << "$" << (amouBasicCom + amouBasicCom2) << endl;
	cout << "Total amount of Luxury House commissions computed = " << "$" << (amouLuxCom + amouLuxCom2) << endl;
	cout << "Total amount of all commissions computed = " << "$"<< (amouStandCom + amouStandCom2 + amouBasicCom + amouBasicCom2 + amouLuxCom + amouLuxCom2) << endl;
	cout << "********************** End of Run Report **********************" << endl << " " << endl;

	system("pause");
	return 0;

}