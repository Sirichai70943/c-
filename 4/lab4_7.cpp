/* Program 4_7 : Use for staement */
#include <iostream>
using namespace std;
int main()
{
    int Number;
    string Name;
    cout << "Enter String : ";
    cin >> Name;
    cout << "Enter Number : ";
    cin >> Number;

    for(int n = 1; n <= Number; n++)
        cout << n << " : " << Name << endl;
        cout << endl;
    return(0);
}