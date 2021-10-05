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

    return(0);
}