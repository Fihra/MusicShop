#include "pch.h"
#include "User.h"


User::User(string name, float wallet)
{
	username = name;
	userwallet = wallet;
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
