#include "Home.h"

Home::Home()
{
	iHome = 0;
	NumbFloor = 0;
	NumbApartament = 0;
	MenCount = 0;
}

Home::Home(int iH, int NumbF, int NumbA, int MenC)
{
	iHome = iH;
	NumbFloor = NumbF;
	NumbApartament = NumbA;
	MenCount = MenC;
}

Home::~Home()
{}

int Home::GetiHome()
{
	return iHome;
}

int Home::GetNumbFloor()
{
	return NumbFloor;
}

int Home::GetNumbApartament()
{
	return NumbApartament;
}

int Home::GetMenCount()
{
	return MenCount;
}

void Home::SetiHome(int iH)
{
	iHome = iH;
}

void Home::SetNumbFloor(int NumbF)
{
	NumbFloor = NumbF;
}

void Home::SetNumbApartament(int NumbA)
{
	NumbApartament = NumbA;
}

void Home::SetMenCount(int MenC)
{
	MenCount = MenC;
}

ostream& operator<<(std::ostream& out, Home& Home)
{
	out << "House number: " << Home.iHome << endl;
	out << "Floor count: " << Home.NumbFloor << endl;
	out << "Apartaments count: " << Home.NumbApartament << endl;
	out << "Men count: " << Home.MenCount << endl;
	return out;
}

Home Home::operator =(const Home house)
{
	iHome = house.iHome;
	NumbFloor = house.NumbFloor;
	NumbApartament = house.NumbApartament;
	MenCount = house.MenCount;
	return *this;
}
