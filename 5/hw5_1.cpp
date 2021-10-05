#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter character : ";
    cin >> ch;

    if(ch >= '0' && ch <= '9'){
        cout << "\'" << ch << "\'" " is digit\n";
    }else if(ch >= 'A' && ch <= 'Z'){
        cout << "\'" << ch << "\'" << "is Upper character.\n";
        cout << "\'" << ch << "\'" << "convert to lower ";
        ch = ch+32;
        cout << "\'" << ch << "\'";
    }else if(ch >= 'a' && ch <= 'z'){
        cout << "\'" << ch << "\'" << "is lower character.\n";
        cout << "\'" << ch << "\'" " convert to Upper ";
        ch = ch-32;
        cout << "\'" << ch << "\'";
    }else cout << "special character.";
    return(0);
}