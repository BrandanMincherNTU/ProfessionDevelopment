#include <string>
#include <iostream>
#include "main.h";
#include <fstream>
#include <list>

using namespace std;



int main() 

{
	fstream Accountsfile;
	srand(time(NULL));
	BANK bank;
	bank.showMenu1();

	if (bank.option1 == 2) 
	{
		customer customer1;
		customer1.name = "";
		customer1.accountnumber = 0;
		customer1.pin = 0;
		customer1.balance = 0;

		cout << "Enter Your Name." << endl;
		cin >> customer1.name;

		customer1.accountnumber = 10000000 + rand() % 80000000 + 1;
		customer1.pin = 1000 + rand() % 8000 + 1;
		customer1.balance = 0;

		cout << customer1.pin;


		Accountsfile.open("Accounts.txt", ios::app);


		if (Accountsfile.is_open())
		{
			Accountsfile << customer1.name << "," << customer1.accountnumber << "," << customer1.pin << "," << customer1.balance << "\n";
			Accountsfile.close();
		}



	}

	if (bank.option1 == 1)

	{
		customer customer1;
		customer1.name = "";
		customer1.accountnumber = 0;
		customer1.pin = 0;
		customer1.balance = 0;

		cout << "Enter Your Name." << endl;
		cin >> customer1.name;
		cout << "Enter Account Number." << endl;
		cin >> customer1.pin;
		cout << "Enter Pin." << endl;
		cin >> customer1.pin;

		Accountsfile.open("Accounts.txt", ios::in);

		if (Accountsfile.is_open())
		{
			string account;
			while (getline(Accountsfile, account)) 
			{

				cout << account << endl;

			}
			

		}


	}
	

	




	
	
	
	
	

	
	

	
	
	
	
	
	
	
	
	
	
	
	//bank.showMenu1();
	//bank.showMenu2();
	


}
