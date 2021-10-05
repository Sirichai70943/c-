#include <iostream>
#include <math.h> // cmath
using namespace std;
int main()
{
    int choice;
    float area,r,circum;
    double volume;
    float pi = 3.14;

    cout << "Enter the number of radious : ";
    cin >> r;
    cout << "1. Calculate the circumference of circle" << endl;
    cout << "2. Calculate the area of cricle" << endl;
    cout << "3. Calculate the volume of phere" << endl;
    cout << "Enter the choice : ";
    cin >> choice;
    switch (choice)
    {
        case 1 :
            circum = 2.0 * pi * r;
            cout << "Circumference of circle is " << circum << endl;
            break;
        case 2 :
            area = pi * pow(r,2);
            cout << "Area of cricle is " << area << endl;
            break;
        case 3 :
            volume = (4.0/3.0) * pi * pow(r,3);
            cout << "volume of circle is " << volume << endl;
            break;
        
        default: cout << "Error !!!" << endl;
    }
    return(0);
}