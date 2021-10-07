#include <iostream>
#include <iomanip>
using namespace std;
void displayArray(int temp[][4]);
int main()
{
    int data[3][4];
    for (int r = 0; r < 3; r++)
        for (int c = 0; c < 4; c++) data[r][c] = (r+1)*(c+1);
    cout << "Values in the array by row are : " << endl;
    displayArray(data);
    return(0);    
}

void displayArray(int temp[][4])
{  
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 4; c++)
            cout << setw(5) << temp[r][c];
        cout << endl;
        
    }
    
}