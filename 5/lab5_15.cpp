#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// Define prototype function
void DisplayMenu();
float Area(const float Radius);
float Area(const float Lenght, const float Widht);
int main()
{
    char choice;
    bool flag = true;
    do{
        DisplayMenu();
        cin >> choice;
        if (choice == '1')
        {
            float Radius;
            cout << "\nEnter radius : ";
            cin >> Radius;
            cout << "Area of Circle = " << fixed;
            cout << setprecision(2) << Area(Radius) << endl;
        }else if(choice == '2')
        {
            float Lenght, Widht;
            cout << "Enter lenght and widht : ";
            cin >> Lenght >> Widht;
            cout << "Area of Rectangle = " << fixed;
            cout << setprecision(2) << Area(Lenght,Widht);
            cout << endl;
        }else if (choice == '3')
        {
            flag = false;
        }else
        {
            cout << "\nYou Choice out of range is ";
            cout << "not process.\n";
        }
    }while (flag);
    cout << "\n...Exit Program...\n";
    return(0);
}

float Area(const float Radius)
{
    return(3.14159F * Radius *Radius);
}

float Area(const float Lenght, const float Widht)
{
    return(Lenght * Widht);
}

void DisplayMenu()
{
    cout << endl;
    cout << "Program Calculate Area" << endl;
    cout << "1. Clrcle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice number : ";
}