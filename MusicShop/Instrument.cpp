#include "pch.h"
#include "Instrument.h"

#include <string>
using namespace std;

Instrument::Instrument(string name, float price)
{
	i_name = name;
	i_price= price;

}

//void Instrument::showName()
//{
//	cout << instrumentName;
//}
//
//void Instrument::showPrice()
//{
//	cout << instrumentPrice;
//}



Instrument::~Instrument()
{
}
