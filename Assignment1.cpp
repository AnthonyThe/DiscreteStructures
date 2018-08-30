/*
Anthony The
8-29-2018
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
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUWXYZabcdefghijklmnopqrstuwxyz"; // excludes v altogether
	string answer = "ok";


	while (newWFF == true)
	{
	bool isAlpha = false;	//I declare these bools inside the while loop because if the user wants to
	bool isConnector = false;//go through the program again, the variables have to be reset to false.
	bool lastWasNot = false;
	bool fail = false;//if the program detects an invalid WFF, the fail variable has to be reset to false to test another WFF. 

	cout << "Please enter a valid WFF: ";
	getline(cin, input);
	cout << endl;

		for (char c : input)
		{
			if (c == ' ')
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
			else
			{
				fail = true;
				cout << "Not a valid WFF" << endl;
				break;
			}

		}
		if (fail == false)
		{
			cout << "This WFF checks out e.e" << endl;

		}
		
		//If the user wants to try another WFF
		cout << "Would you like to try another WFF? (y or n) ";
		cin >> answer;
		cin.ignore();//the getline will screw up if this white space isn't taken care of.
		if (answer != "N" && answer != "Y" && answer != "n" && answer != "y") // I had this much simpler with chars and toupper, but the program
		{									//wasn't working and I thought it might be because of this section. . . It wasn't 
			while (answer != "N" && answer != "Y" && answer != "n" && answer != "y")//So now I have 4 different cases for answer ;)					
			{
				cout << "Invalid answer >:( " << endl;
				cout << "Please enter either n or y for yes or no. " << endl;
				cin >> answer;
				cin.ignore();
				system("cls");
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
