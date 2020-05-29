#pragma once
#include <string>
using namespace std;
class User
{
public:
	string username;
	float userwallet;
	User(string name, float wallet = 1000.00);
	float ShowWalletBalance();
	void LoadWallet();
	~User();
};

