#include <iostream>
#include <string>
using namespace std;
int main()
{
    int number;
    char ch;
    cout << "Enter number : ";
    cin >> number;
    cout << number/1000 << "\t";
    cout << (number%1000)/100 << "\t";
    cout << (number%100)/10 << "\t";
    cout << (number%10) << "\t"; 
    return(0);
}