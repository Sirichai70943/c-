#include <iostream>
using namespace std;
int main()
{
    /* char ch;
    cout << "Enter a Character : ";
    cin >> ch;
    if(ch >= '0' && ch <= '9')
    {
        cout << ch << " is nummeric.";
    }
    else{
        cout << ch << " is not numeric.";
    }
    return(0);  */

    int GPA;
    cout  << "Enter GPA : ";
    cin >> GPA;

    if(GPA >= 80 && GPA <=100){
        cout << "Grade A ";
    }else if(GPA >=70 && GPA < 80){
        cout << "Grade B ";
    }else if(GPA >=60 && GPA <= 70){
        cout << "Grade C ";
    }else if(GPA >=50 && GPA <= 60){
        cout << "Grade D ";
    }else if(GPA > 0 && GPA < 50){
        cout << "Grade F ";
    }else{
        cout << "Please enter a new grade.";
    }
    return(0);
} 

