#include <iostream>
#include <string>
using namespace std;
int main()
{
    char ch;
    string message;
    cout << "Enter character : ";
    cin >> ch;
    cout << endl;
    if(isalnum(ch)){
        if(isalpha(ch)){
            if(islower(ch)) message = "lower character.";
            else message = "upper character.";

        }
        else if(isdigit(ch)) message = "digit.";
    }
    else message = "special character.";
    cout << "\'" << ch << "\'" << " is " << message << endl;
    if(isalpha(ch)){
        if(islower(ch)){
            cout << "\'" << ch << "\'" << " convert to upper \'";
            cout << (char)tolower(ch) << "\'";
        }
        cout << endl;
    }
    return(0);
}