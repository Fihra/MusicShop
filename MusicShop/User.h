#pragma once
#include <string>
#include <vector>
#include "Instrument.h"
using namespace std;
class User
{
public:
	string username;
	float userwallet;
	vector<Instrument> userCart;
	User(string name, float wallet = 1000.00);
	float ShowWalletBalance();
	void LoadWallet();
	~User();
};

