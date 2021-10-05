#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
    double Value;
    cout << "Enter floating number : ";
    cin >> Value;
    cout << endl;
    cout << "\nCeiling of " << Value << " is " << ceil(Value);
    cout << "\nFloor of " << Value << " is " << floor(Value);
    cout << "\nSquare of " << Value << " is " << sqrt(Value);
    cout << "\nExponential of " << Value << " is " << exp(Value);
    cout << "\nFloating absolute of " << Value << " is " << fabs(Value);
    cout << "\nNatural Logarithm of " << Value << " is " << log(Value);
    cout << "\nLogarithm(10 base) of " << Value << " is " << log10(Value);
    cout << "\nPower three of " << Value << " is " << pow(Value,3);
    cout << "\nSin of " << Value << " is " << sin(Value);
    cout << "\nCosine of " << Value << " is " << cos(Value);
    cout << "\nTangent of " << Value << " is " << tan(Value);
    cout << endl;
    return(0);
    
}