// MusicShop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "UserOutput.h"
#include <vector>

#include "Instrument.h"
#include "User.h"

using namespace std;

int main()
{	
	

	string name;
	int choice;

	name = Intro();
	User *mainUser = new User(name);
	cout << "Nice to meet you " << mainUser->username << "." << endl;
	cout << "Your current wallet balance: $" << mainUser->userwallet << endl;

	do
	{
		Menu();
		cin >> choice;
		switch (choice)
		{
		case 1:
			ShowInstruments();
			break;
		case 2:
			cout << "Your wallet balance: $" << mainUser->ShowWalletBalance() << endl;
			ShowCart(mainUser->userCart);
			ShoppingMenu();
			break;
		case 3:
			mainUser->LoadWallet();
			cout << "Loaded $100.50" << endl;
			break;
		case 4:
			break;
		default:
			cout << "Invalid choice" << endl;
		}
	} while (choice != 4);

	cout << "Thank you for shopping. Please come again." << endl;
	
	
}
