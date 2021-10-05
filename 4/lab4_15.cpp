#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter String : ";
    cin >> str;
    cout << endl;
    cout << "Your string enter : " << str << endl;
    cout << "Length of string = " << str.length() << endl;
    for(int n = 0; n < str.length(); n++){
        cout  << "Position " << n << " = " << str.at(n) << endl;
    }
    return(0);
}