#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Please enter year : ";
    cin >> year;
    
    if(year%100 == 0){
        if( year%400 == 0){
            cout << "Year " << year << " is a leap year" << endl;
        }else cout << "Year " << year << " is not a leap year" << endl;
    }else if(year%4 == 0 && year%100 != 0){
        cout << "Year " << year << " is a leap year" << endl;
    }else cout << "Year " << year << " is not a leap year" << endl;
    return(0);
    
}