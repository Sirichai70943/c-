/* Program 4_5 : Calculate Area */
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char Choice;
    float Area;
    cout << "Program Calculate Area " << endl;
    cout << " 1. Circle" << endl;
    cout << " 2. Rectangle" << endl;
    cout << " 3. Exit" << endl;
    cout << "Enter you choose number : ";
    cin >> Choice;
    /* if(Choice == '1'){
        float Radius;
        cout << "\nEnter Radius : ";
        cin >> Radius;
        Area = 3.14159F * Radius * Radius;
        cout << "Area of Circle = " << Area << endl;
    }
    else if(Choice == '2'){
        float Length,Width;
        cout << "Enter length and width : ";
        cin >> Length >> Width;
        Area = Length * Width;
        cout << "Area of Rectangle = " << Area << endl;
    }
    else if(Choice == '3') cout << "\n...Exit program...\n";
    else cout << "\nYou choose out of rang is not process.\n"; */

    switch (Choice)
    {
        case '1' :  float Radius;
                    cout << "\nEnter Radius : ";
                    cin >> Radius;
                    Area = 3.14159F * Radius * Radius;
                    cout << "Area of Circle = " << Area << endl;
            break;
        case '2' :  float Length,Width;
                    cout << "Enter length and width : ";
                    cin >> Length >> Width;
                    Area = Length * Width;
                    cout << "Area of Rectangle = " << Area << endl;
            break;
        case '3' :  cout << "\n...Exit program...\n";
            break;
    
        default:    cout << "You choose out of rang is not process.\n";
            return(1);
    }
    return(0);
}