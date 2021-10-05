#include <iostream>  
using namespace std;  
int main()  
{  

    string binaryNumber;
    cout << "Enter binary number : ";
    cin >> binaryNumber;
    
    cout << "Decimal value of " << binaryNumber << " = " << stoi(binaryNumber, 0, 2);   
    return(0);  
}