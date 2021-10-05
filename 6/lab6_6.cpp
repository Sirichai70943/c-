#include <iostream>
#include <iomanip>
using namespace std;
void sort(int temp[], const int max);
void swap(int &n1, int &n2);
int main()
{
    const int max = 10;
    int data[max] = {50,0,44,7,3,100,12,36,72,23};
    cout << "\nData before sort in array...\n";
    for (int n = 0; n < max; n++) cout << setw(5) << data[n];
    cout << "\n\nStart Sort...\n";
    sort(data, max);
    cout << "\n\nEnd Sort...\n";
    cout << "\nData after sort finish.\n";
    for(int n = 0; n < max; n++) cout << setw(5) << data[n];
    cout << "\n";
    return(0);  
}

void sort(int temp[], const int max)
{
    int i,j,n;
    for (i = 0; i < max - 1; i++)
    {
        n = i;
        for(j = i; j < max; j++)
            if(temp[n] > temp[j]) n = j;
        if(n != i) swap(temp[i],temp[n]);
        cout << "\n" << i+1 << " : ";
        for(j = 0; j < max; j++) cout << setw(5) << temp[j];
    }
}

void swap(int &n1, int &n2)
{
    int temp;
    temp = n1; n1 = n2; n2 = temp;
}