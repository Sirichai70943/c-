#include <iostream>
#include <string>
using namespace std;
void changeString(string &s1, string &s2);
int main()
{
    string Str1, Str2;
    cout << "Enter first string : ";
    cin >> Str1;
    cout << "Enter second number : ";
    cin >> Str2;
    cout << "Data string before call function.\n";
    cout << "Str1 = " << Str1 << endl;
    cout << "Str2 = " << Str2 << endl;
    changeString(Str1, Str2);
    cout << "Data string after call function.\n";
    cout << "Str1 = " << Str1 << endl;
    cout << "Str2 = " << Str2 << endl;
    changeString(Str1, Str2);
    cout << "Data string after cal function.\n";
    cout << "Str1 = " << Str1 << endl;
    cout << "Str2 = " << Str2 << endl;
    return(0);
}

void changeString(string &s1, string &s2)
{
    string Temp;
    Temp = s1;
    s1 = s2;
    s2 = Temp;
}