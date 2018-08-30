/*
Anthony The
8-29-2018
Discrete Structures
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	bool isAlpha = false;
	bool isConnector = false;
	bool lastWasNot = false;
	bool nextAlpha = false;
	bool fail = false;
	string input;
	string connectors = "V^v";
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUWXYZabcdefghijklmnopqrstuwxyz"; // excludes v altogether

	cout << "Please enter a valid WFF: ";
	getline(cin, input);
	cout << endl << endl;


	for (char c : input)
	{
		if (c == ' ')
			continue;
		if (connectors.find(c) != string::npos && isAlpha)
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
	system("pause");

	return 0;
}
