// MusicShop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "UserOutput.h"
#include <vector>

#include "Instrument.h"

using namespace std;

int main()
{	
	vector<Instrument> shoppingCart;

	string name;
	int choice;

	name = Intro();
	cout << "Nice to meet you " << name << "." << endl;
	Menu();
	cin >> choice;
	switch (choice)
	{
		case 1:
			ShowInstruments();
			break;
		case 2:
			ShowCart(shoppingCart);
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
	}
	

	
}
