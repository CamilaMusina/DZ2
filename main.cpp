#include <iostream>
#include "Street.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    Street ulitsa;
    ulitsa.SetNameStreet("Tverskaya");
    ulitsa.SetHomeNums(3);
    ulitsa.SetHomes();
    cout << "Всего избирателей на улице " << ulitsa.GetNameStreet() << ": ";
    cout << ulitsa.GetMenNums() << endl;
    for (auto x : ulitsa.GetVectorHouses())
    {
        cout << "Всего избирателей в доме " << x.GetiHome() << ": ";
        cout << x.GetMenCount() << endl;
    }
    auto vec = ulitsa.GetVectorHouses();
    cout << "Количество этажей в доме №" << vec[1].GetiHome() << ": " << vec[1].GetNumbFloor() << endl;
    
    Street road("Bronnaya");
    road.SetHomeNums(5);
    auto arr = road.GetVectorHouses();
    arr[0].SetiHome(16);
    arr[0].SetNumbFloor(3);
    arr[0].SetNumbApartament(15);
    arr[0].SetMenCount(47);
    arr[2] = arr[0];
    cout << arr[0] << arr[1] << arr[2];
    return 0;
}
