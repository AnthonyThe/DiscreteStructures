/*
Anthony The
Discrete Structures
Mr. Wilson
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	bool newWFF = true;
	string input;
	string connectors = "V^v";
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUWXYZabcdefghijklmnopqrstuwxyz"; // excludes v because v is a connector
	string answer;

	while (newWFF == true)
	{
		bool isAlpha = false;	//I declare these bools inside the while loop because if the user wants to
		bool isConnector = false;//go through the program again, the variables have to be reset to false.
		bool lastWasNot = false;
		bool fail = false;//if the program detects an invalid WFF, the fail variable has to be reset to false to test another WFF. 
		bool lastWasDash = false;

		cout << "Please enter a valid WFF: ";
		getline(cin, input);
		cout << endl;

		for (char c : input)
		{
			if (c == ' ' || c == '(' || c == ')')
				continue;
			if (connectors.find(c) != string::npos && isAlpha == true)
			{
				isConnector = true;
				isAlpha = false;
				lastWasNot = false;
			}
			else if (alphabet.find(c) != string::npos && isAlpha == false)
			{
				isAlpha = true;
				isConnector = false;
				lastWasNot = false;
			}
			else if (c == '!' && isAlpha == false && lastWasNot == false)
			{
				lastWasNot = true;
				isAlpha = false;
				isConnector = false;
			}
			else if (c == '-' && isAlpha == true)
			{
				lastWasDash = true;
				isAlpha = false;
				lastWasNot = false;
			}
			else if (c == '>' && lastWasDash == true)
			{
				lastWasDash = false;
				continue;
			}
			else
			{
				fail = true;
				break;
			}

		}
		if (fail == false && isAlpha == true)	//the mess above only checks to see if the WFF is valid up to the point c is at.  isAlpha here will
		{										//make sure the WFF ended with a letter.  Otherwise it will be invalid. 
			cout << "This WFF checks out e.e" << endl;
		}
		else
		{
			cout << "Not a valid WFF" << endl;
		}

		//If the user wants to try another WFF
		cout << "Would you like to try another WFF? (y or n) ";
		cin >> answer;
		cin.ignore();	//for the getline
		if (answer != "N" && answer != "Y" && answer != "n" && answer != "y") 
		{
			while (answer != "N" && answer != "Y" && answer != "n" && answer != "y")		
			{
				system("cls");
				cout << "Invalid answer >:( " << endl;
				cout << "Please enter either 'n' for no or 'y' for yes. ";
				cin >> answer;
				cin.ignore();
			}
		}
		if (answer == "Y" || answer == "y")
		{
			newWFF = true;
			system("cls");
		}
		else if (answer == "N" || answer == "n")
		{
			newWFF = false;
		}
	}
	system("pause");

	return 0;
}
