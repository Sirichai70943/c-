#include <iostream>
#include <string>
using namespace std;
int main()
{
    char ch;
    int count = 0;
    string str;
    cout << "Enter String : ";
    while ((ch = cin.get()) != '\n')
    {
        count++;
        str += ch;
    }
    cout << "\nLength of string("<< str <<")is ";
    cout << count << endl;
    return(0);
}