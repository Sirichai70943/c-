#include <iostream>
using namespace std;
int main()
{
    int kilo,price;
    
    cout << "Enter distance (km) : ";
    cin >> kilo;

    if (kilo > 0 && kilo <= 1)
    {
        price = 40;
    }else if (kilo >= 2 && kilo <= 10)
    {
        price = 40 + ((kilo - 1) * 5);
    }else if (kilo >= 11 && kilo <= 15)
    {
        price = 40 + ((kilo - 1) * 4);
    }else if (kilo >= 16 && kilo <= 20)
    {
        price = 40 + ((kilo - 1) * 3);
    }else if (kilo > 20)
    {
        price = 40 + ((kilo - 1) * 2);
    }
    
    cout << "Distance " << kilo << " (km) " << price << " Bath." << endl;
}