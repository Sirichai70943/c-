#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float M, N;
    float canfish,cantomato,numberall;
    cout << "Quantity fish per can : ";
    cin >> M;
    cout << "Quantity tomato per can : ";
    cin >> N;
 
    canfish = (600/M);
    cantomato = (200/N);
    numberall = min(canfish,cantomato);

    cout << "==================================" << endl;
    cout << "number of cans : " << numberall << endl;
    cout << "the rest of the fish : " << (canfish-numberall)*M << endl;
    cout << "the rest of the tomato : " << (cantomato-numberall)*N << endl;

    return(0);
}