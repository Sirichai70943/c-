#include <iostream>
using namespace std;
unsigned long Factorial1(int number);
unsigned long Factorial2(int number);
int main()
{
    int Value;
    cout << "Enter integer number(0-20) : ";
    cin >> Value;
    unsigned long Fac;
    Fac = Factorial1(Value);
    cout << "Factorial1 of " << Value << " is ";
    cout << Fac << endl;
    Fac = Factorial2(Value);
    cout << "Factorial2 of " << Value << " is ";
    cout << Fac << endl;
    return(0);
}

// This function use loop
unsigned long Factorial1(int number)
{
    unsigned long Fac = 1;
    for(int n = 1; n <= number; n++)
        Fac *= n;
    return(Fac);
}

// This function use recursion function
unsigned long Factorial2(int number)
{
    unsigned long Fac = 1;
    if(number > 1) return(number * Factorial2(number -1));
    else return(1);
}