#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Instrument.h"
#include "User.h"
#include <vector>
using namespace std;

void AddToCart();
void RemoveFromCart();

string Intro()
{
	cout << "Music Shop" << endl;
	string nameOutput;
	cout << "What is your name? " << endl;
	cin >> nameOutput;
	return nameOutput;
}

void Menu()
{
	cout << "Main Menu" << endl;
	cout << "1) View Products" << endl;
	cout << "2) View Cart" << endl;
	cout << "3) Load Wallet" << endl;
	cout << "4) Exit" << endl;
	cout << "Choice: ";
}

void ShowProducts()
{

}

void ShowInstruments()
{
	Instrument Instruments[] =
	{
		Instrument("Violin", 750.00),
		Instrument("Piano", 3000.00),
		Instrument("Guitar", 430.00),
		Instrument("Clarinet", 550.00)
	};

	int count = sizeof(Instruments)/sizeof(Instruments[0]);

	//for (const Instrument i : Instruments)
	//{
	//	cout << "Item Name: " << i.i_name << endl;
	//	cout << "Price: " << i.i_price << endl;
	//	cout << "---------------------" << endl;
	//}
	for (int i = 0; i < count; i++)
	{
		cout << i + 1 << ") " << "Name: " << Instruments[i].i_name << "    Price: $" << Instruments[i].i_price << endl;
		cout << "-----------------------------" << endl;
	}

}

int ShoppingMenu()
{
	int inputChoice;
	cout << "1) Choose a number to add in cart." << endl;
	cout << "2) Choose a number to remove from cart." << endl;
	cout << "3) Go Back." << endl;
	cout << "Choice: ";

	do 
	{
		cin >> inputChoice;
		switch (inputChoice)
		{
		case 1:
			AddToCart();
			return 1;
			break;
		case 2:
			RemoveFromCart();
			return 2;
			break;
		case 3:
			return 3;
			break;
		default:
			cout << "Invalid input." << endl;
			break;
		}
	} while (inputChoice != 3);

}

void AddToCart()
{
	cout << "Inside Add to Cart" << endl;
}

void RemoveFromCart()
{
	cout << "Inside Remove to Cart" << endl;
}

void ShowCart(vector<Instrument> shoppingCart)
{

	if (shoppingCart.size() == 0)
	{
		cout << "Your shopping cart is empty." << endl;
	}
	else
	{

		for (int i = 0; i < shoppingCart.size(); i++)
		{
			cout << i + 1 << ") " << shoppingCart[i].i_name << endl;
		}

		//for (const Instrument i : shoppingCart)
		//{
		//	cout << i.i_name << endl;
		//}
	}
}