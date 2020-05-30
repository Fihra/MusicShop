#include "pch.h"
#include "User.h"
#include <vector>

User::User(string name, float wallet)
{
	username = name;
	userwallet = wallet;
	userCart = {};
}

float User::ShowWalletBalance()
{
	return userwallet;
}

void User::LoadWallet()
{
	userwallet += 100.50;
}

User::~User()
{
}
