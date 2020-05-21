#ifndef Home_h
#define Home_h

#include <ostream>

using namespace std;

class Home
{
	int iHome;
	int NumbFloor;
	int NumbApartament;
	int MenCount;

public:
	Home();
	Home(int iH, int NumbF, int NumbA, int MenC);
	~Home();
	int GetiHome();
	int GetNumbFloor();
	int GetNumbApartament();
	int GetMenCount();
	void SetiHome(int iH);
	void SetNumbFloor(int NumbF);
	void SetNumbApartament(int NumbA);
	void SetMenCount(int MenC);
	friend ostream& operator<<(std::ostream& out, Home& Home);
	Home operator=(const Home house);
};

#endif 
