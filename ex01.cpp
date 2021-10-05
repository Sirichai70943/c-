#include <iostream>
using namespace std;
int main()
{
    int gallon, mlies;

    cout << "Input petroleum used ";
    cin >> gallon;
    cout << "Input mileage ";
    cin >> mlies;

    cout << "(1) Fuel economy = " << mlies / gallon  << " Miles per gallon (MPG)" << endl;
    cout << "(2) The car will use " <<  (float) (gallon * 4.5461) / (mlies * 1.6093) << " Liter per kilometer" << endl;
    cout << "(3) Fuel economy = " << (float) (mlies * 1.6093) / (gallon * 4.5461)  << " kilometer per Liter (km/L)" << endl;
    return(0);
}