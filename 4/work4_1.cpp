#include <iostream>
using namespace std;
int main()
{
    float salary, tax;
    cout << "Enter Salary : ";
    cin >> salary;

    if(salary >=0 && salary < 100000){
        tax = salary * 0.05;
        cout << "tax = " << tax << endl;
        cout << "taxed money = " << salary - tax << endl;
    }else if(salary >= 100001 && salary <= 500000){
        tax = salary * 0.1;
        cout << "tax = " << tax << endl;
        cout << "taxed money = " << salary - tax << endl;
    }else if(salary >= 500001 && salary <= 1000000){
        tax = salary * 0.2;
        cout << "tax = " << tax << endl;
        cout << "taxed money = " << salary - tax << endl;
    }else if(salary >= 1000001 && salary <= 4000000){
        tax = salary * 0.3;
        cout << "tax = " << tax << endl;
        cout << "taxed money = " << salary - tax << endl;
    }else if(salary >= 4000001){
        tax = salary * 0.47;
        cout << "tax = " << tax << endl;
        cout << "taxed money = " << salary - tax << endl;
    }
}