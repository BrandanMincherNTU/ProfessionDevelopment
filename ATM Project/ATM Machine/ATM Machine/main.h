#pragma once
#include <string>
#include <iostream>


using namespace std;




struct customer
{
	string name;
	int accountnumber;
	int pin;
	int balance;
};



class BANK
{




public:
	int option1;
	int option2;


	int showMenu1()
	{
		cout << "////////LOGIN/SIGNUP////////" << endl;
		cout << "OPTION 1: LOGIN" << endl;
		cout << "OPTION 2: SINGUP" << endl;
		cin >> option1;

		return option1;
	}
	int showMenu2()
	{
		cout << "////////MENU////////" << endl;
		cout << "OPTION 1: CHECK BALANCE" << endl;
		cout << "OPTION 2: WITHDRAW BALANCE" << endl;
		cout << "OPTION 3: DEPOSIT INTO BALANCE" << endl;
		cout << "OPTION 4: INVEST FOR COMPOUND INTEREST" << endl;
		cin >> option2;

		return option2;
	}


	




};