#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    float Fahrenheit,Celsius;

    cout << "Enter temperature Fahrenheit : ";
    cin >> Fahrenheit;
    cout << "====================================" << endl;
    Celsius = (Fahrenheit - 32) * 0.555555;
    cout << "Fahrenheit to Celsius : " << Celsius << " Celsius." << endl; 
    return(0);
}