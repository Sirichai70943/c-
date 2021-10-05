#include <iostream>
using namespace std;

int main()
{
    int number1, number2; 
    cout << "Enter number1 : ";
    cin >> number1;
    cout << "Enter number2 : ";
    cin >> number2;
    cout << "Result of" << endl;
    cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
    cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
    cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
    cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
    cout << number1 << " % " << number2 << " = " << number1 % number2 << endl;
    cout << "Press any key to continue . . ." << endl;
    return(0);
}