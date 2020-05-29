#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Instrument.h"
#include <vector>
using namespace std;

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
	cout << "3) Exit" << endl;
	cout << "Choice: " << endl;
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

	for (const Instrument i : Instruments)
	{
		cout << "Item Name: " << i.i_name << endl;
		cout << "Price: " << i.i_price << endl;
		cout << "---------------------" << endl;
	}

}

void ShowCart(vector<Instrument> shoppingCart)
{
	if (shoppingCart.size() == 0)
	{
		cout << "Your shopping cart is empty." << endl;
	} 
	else 
	{
		for (const Instrument i : shoppingCart)
		{
			cout << i.i_name << endl;
		}
	}
}