#include <iostream>
#include<chrono>
#include"windows.h"	//for the sleep function
using namespace std;

int findGCD(int num1, int num2);

int main()
{
	int GCD;
	int num1;
	int num2;
	bool redo = true;
	char answer;
	
	while (redo == true)
	{

		cout << "Enter two integers and I will calculate their"
			<< " greatest common denominator";
		cout << endl << "Number 1: ";
		cin >> num1;
		cout << "Number 2: ";
		cin >> num2;

		while (num1 < 1 || num2 < 1)	//doesn't test if the number goes too high
		{
			system("cls");
			cout << "The numbers must be positive. Try again" << endl;
			cout << "Number 1: ";
			cin >> num1;
			cout << "Number 2: ";
			cin >> num2;
		}

		chrono::high_resolution_clock::time_point time1 = chrono::high_resolution_clock::now();
		//Sleep(1000);	//this was to test the time

		GCD = findGCD(num1, num2);
		cout << "The greatest common denomenator is: " << GCD << endl << endl;
		
		chrono::high_resolution_clock::time_point time2 = chrono::high_resolution_clock::now();
		chrono::duration<double> time_span = chrono::duration_cast<chrono::duration<double>>(time2 - time1);
		cout << "The program took " << time_span.count() << " seconds long" << endl << endl;

		cout << "Would you like to try different numbers?('y' for yes, 'n' for no) ";
		cin >> answer;
		if (answer == 'n')
		{
			redo = false;
		}
		system("cls");
	}

	return 0;
}

int findGCD(int num1, int num2)
{
	int remainder;

	if (num1 > num2)
	{
		remainder = num1 % num2;
		if (remainder != 0)
		{
			num1 = num2;
			num2 = remainder;
			findGCD(num1, num2);
		}
		else if (remainder == 0)
		{
			return num2;
		}
	}
	else if (num2 > num1)
	{
		remainder = num2 % num1;
		if (remainder != 0)
		{
			num2 = num1;
			num1 = remainder;
			findGCD(num1, num2);
		}
		else if (remainder == 0)
		{
			return num1;
		}
	}
}
