#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float X, Y;
    float canfish,cantomato,numberall;
    cout << "Amount fish : ";
    cin >> X;
    cout << "Amount tomato : ";
    cin >> Y;
 
    canfish = (X/3);
    cantomato = (Y/2);
    numberall = min(canfish,cantomato);

    cout << "==================================" << endl;
    cout << "number of cans : " << numberall << endl;
    cout << "the rest of the fish : " << (canfish-numberall)*3 << endl;
    cout << "the rest of the tomato : " << (cantomato-numberall)*2 << endl;

    return(0);
}