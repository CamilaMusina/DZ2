#ifndef Street_h
#define Street_h

#include "Home.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Street
{
	string NameStreet;
	int HomeNums;
	int MenNums;
	vector<Home> Houses;

public:
	Street();
	Street(string NameS);
	~Street();
	string GetNameStreet();
	int GetHomeNums();
	int GetMenNums();
	vector<Home>& GetVectorHouses();
	void SetNameStreet(string Name);
	void SetHomeNums(int HomeN);
	void SetHomes();	
	void SetMenNums(int MenN);
};

#endif 
