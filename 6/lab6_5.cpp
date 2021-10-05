#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void ReadData(float Temp[]);
void CalculateData(const float Temp[],float &Mean,float &St_Dev);
const int MAX_ITEM = 5;
int main()
{
    float x[MAX_ITEM], Mean, St_Dev;
    int i;
    
    ReadData(x);

    CalculateData(x,Mean,St_Dev);

    cout << "The mean is ";
    cout << setw(7) << fixed << setprecision(2) << Mean << endl;
    cout << "The standrad deviation is " << setw(7) << St_Dev << endl;

    cout << "Table of difference between data values and mean\n";
    cout << "Index  Item    Difference\n";
    cout << "----------------------------\n";
    for(i = 0; i < MAX_ITEM; i++){
        cout << setw(3) << i << "  ";
        cout << setw(10) << x[i] << "  ";
        cout << setw(10) << x[i]-Mean << endl;
    }
    return(0);
}

void ReadData(float Temp[])
{
    cout << "Enter " << MAX_ITEM;
    cout << " numbers separated by blanks or <enter> :\n";
    for (int i = 0; i < MAX_ITEM; i++)
        cin >> Temp[i];

    cout << endl;    
}

void CalculateData(const float Temp[],float &Mean,float &St_Dev)
{
    float sum, sum_Sqr;
    sum = sum_Sqr = 0;
    for(int i = 0; i < MAX_ITEM; i++)
        sum += Temp[i];

    Mean = sum / MAX_ITEM;
    for (int i = 0; i < MAX_ITEM; i++)
        sum_Sqr += pow(Temp[i] - Mean, 2);
    St_Dev = sqrt(sum_Sqr/(MAX_ITEM - 1));
}