#include <iostream>
using namespace std;
void ModifyArray(int Temp[]);
void ModifyElement(int Temp);
int main()
{
    int data[] = {1,2,3,4,5};
    cout << "Effects of passing entrie array pass-by-reference.\n";
    cout << "Original array's value : ";
    for(int i = 0; i < 5; i++)
        cout << data[i] << " ";
    cout << endl;
    ModifyArray(data);
    cout << "Modified array's value : ";
    for (int i = 0; i < 5; i++)
        cout << data[i] << " ";
    cout << endl << endl;
    cout << "Effects of passing array element pass-by-value.\n";
    cout << "Data[3] before modify element : ";
    cout << data[3] << endl;
    ModifyElement(data[3]);
    cout << "Data[3] after modify element : ";
    cout << data[3] << endl << endl;
    return(0);
}

void ModifyArray(int Temp[])
{
    for(int j = 0; j < 5; j++)
        Temp[j] *= 2;
}

void ModifyElement(int Temp)
{
    Temp *= 2;
}