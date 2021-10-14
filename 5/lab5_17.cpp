#include <iostream>
#include <cstring>
using namespace std;
void Upperstr(char temp[80]);
int Maxint(int val1, int val2);
void swap(int &a, int &b);
int main()
{
    char Name[80];
    int n1, n2;
    cout << "Enter two number(n1 n2) : ";
    cin >> n1 >> n2;
    cout << "Enter string : ";
    cin >> Name;
    cout << endl;
    cout << "\n Before call function...";
    cout << "\n n1 = " << n1 << ", n2 = " << n2;
    cout << ", String = " << Name;
    cout << "\n Max value of n1 & n2 = " << Maxint(n1,n2);
    cout << "\n Press key to call function...";
    getchar();
    getchar();
    swap(n1,n2);
    Upperstr(Name);
    cout << "\n After call function...";
    cout << "\n n1 = " << n1 << ", n2 = " << n2;
    cout << ", string = " << Name << endl;
    return(0);
}

int Maxint(int val1, int val2)
{
    return((val1 > val2)? val1 : val2);
}

void swap(int &a, int &b)
{
    int tmp;
    tmp = a; a = b; b = tmp;
}

void Upperstr(char str[80])
{
    if(strlen(str) > 0)
        for(int index = 0; index < strlen(str); index++)
            str[index] = toupper(str[index]);
}