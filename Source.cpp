//This program printe out whether or not a person waiting in line for a rollercoaster ride is allowed.
//Conditions: No pregnant women, someone shorter than 48 inches
//If one of these people, prints apologetic message, otherwise print okay
#include<iostream>
using namespace std;

int main() {

	int height;
	int isPregnant; //true is person is pregnant

	cout << "Thank you for waiting in line. This is a fun rollercoaster!\n" << endl;
	
	cout << "Must meet conditions before you can get on." << endl;
	cout << "Enter height: " << endl;
	cin >> height;

	cout << "Are you pregnant? " << endl;
	cout << "Enter 0 for NO or 1 for YES\n";
	cin >> isPregnant;

	if (isPregnant == 1 || height < 48)
	{
		cout << "Sorry you can't get on." << endl;
	}
	else 
	{
		cout << "OK: have fun!" << endl;
	}

	system("pause");
	return 0;

}