#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int M, N, X, Y;
    int canfish,cantomato,productall;
    cout << "Enter fish : ";
    cin >> M;
    cout << "Enter tomato : ";
    cin >> N;
    cout << "Enter fish use : ";
    cin >> X;
    cout << "Enter tomato use : ";
    cin >> Y;
 
    canfish = (M/X);
    cantomato = (N/Y);
    productall = min(canfish,cantomato);

    cout << "==================================" << endl;
    cout << "number of cans : " << productall << endl;
    cout << "the rest of the fish : " << (canfish-productall)*X << endl;
    cout << "the rest of the tomato : " << (cantomato-productall)*Y << endl;

    return(0);
}