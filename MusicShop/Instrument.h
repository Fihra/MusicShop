#pragma once
#include <string>
using namespace std;

class Instrument
{
private:
	

public:
	std::string i_name;
	float i_price;
	Instrument(string name, float price);
	//void showName();
	//void showPrice();

	~Instrument();
};

