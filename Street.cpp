#include "Street.h"

Street::Street()
{
	NameStreet = "";
	HomeNums = 0;
	MenNums = 0;
}

Street::Street(string NameS)
{
	NameStreet = NameS;
}

Street::~Street()
{}

string Street::GetNameStreet()
{
	return NameStreet;
}

int Street::GetHomeNums()
{
	return HomeNums;
}

int Street::GetMenNums()
{
	return MenNums;
}

vector<Home>& Street::GetVectorHouses()
{
	return Houses;
}

void Street::SetNameStreet(string Name)
{
	NameStreet = Name;
}

void Street::SetHomeNums(int HomeN)
{
	HomeNums = HomeN;
	Houses.resize(HomeN);
}

void Street::SetHomes()
{
	for (size_t i = 0; i < Houses.size(); i++)
	{
		int iH;
		int NumbF;
		int NumbA;
		int MenC;
		Home house;
		cin >> iH >> NumbF >> NumbA >> MenC;
		house.SetiHome(iH);
		house.SetNumbFloor(NumbF);
		house.SetNumbApartament(NumbA);
		house.SetMenCount(MenC);
		Houses[i] = house;
		SetMenNums(MenC);
	}
}

void Street::SetMenNums(int MenN)
{
	MenNums += MenN;
}
