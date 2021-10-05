#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int canfish,cantomato,numberall;
 
    canfish = (100/3);
    cantomato = (500/2);
    numberall = min(canfish,cantomato);

    cout << "number of cans : " << numberall << endl;
    cout << "the rest of the fish : " << (canfish-numberall)*3 << endl;
    cout << "the rest of the tomato : " << (cantomato-numberall)*2 << endl;

    return(0);
}