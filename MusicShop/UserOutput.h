#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>

#include "Instrument.h"

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
}

void ShowProducts()
{

}

void ShowInstruments()
{
	Instrument Instruments[] =
	{
		Instrument("Violin", 500.00),
		Instrument("Piano", 300.00),
		Instrument("Guitar", 250.00)
	};

	for (const Instrument i : Instruments)
	{
		cout << "Item Name: " << i.i_name << endl;
		cout << "Price: " << i.i_price;
		
	}

}

void ShowCart()
{

}