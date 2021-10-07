#include <iostream>
#include <string.h>
using namespace std;
void SortString(char data[][20]);
int main()
{
    char city[5][20];
    cout << "Enter value string.\n\n";
    for(int i = 0; i < 5; i++)
    {
        cout << "Input name of city " << i + 1 << " : ";
        cin >> city[i];
    }
    SortString(city);
    cout << "\nList name of City.\n";
    for(int i = 0; i < 5; i++)
        cout << i + 1 << " " << city[i] << endl;
    return(0);
}

void SortString(char data[][20])
{
    int i,j,flag;
    char temp[20];
    for(i = 1; i < 5; i++)
    {
        flag = 0;
        for(j = 0; j < 5-i; j++)
        {
            if(strcmp(data[j],data[j+1]) > 0)
            {
                strcpy(temp,data[j]);
                strcpy(data[j],data[j+1]);
                strcpy(data[j+1],temp);
                flag = 1;
            }
        }
        if (!flag) break;
    } 
}