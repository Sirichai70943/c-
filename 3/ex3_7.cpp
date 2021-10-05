#include <iostream>
using namespace std;
int main()
{
    float M, N, X, Y;
    float totalfish,totaltomato,numberall;
    cout << "Amount fish : ";
    cin >> M;
    cout << "Amount tomato : ";
    cin >> N;
    cout << "Quantity fish per can : ";
    cin >> X;
    cout << "Quantity tomato per can : ";
    cin >> Y;
 
    totalfish = (M/X);
    totaltomato = (N/Y);
    numberall = min(totalfish,totaltomato);

    cout << "==================================" << endl;
    cout << "number of cans : " << numberall << endl;
    cout << "the rest of the fish : " << (totalfish-numberall)*X << endl;
    cout << "the rest of the tomato : " << (totaltomato-numberall)*Y << endl;

    return(0);
}