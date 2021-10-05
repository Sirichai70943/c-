#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    int sum = 0;
    bool status = true;
    do
    {
        cout << "Enter Number 1 : ";
        cin >> num1;
        cout << "Enter Number 2 : ";
        cin >> num2;
        if (num1 < num2) status = false;
        else cout << "Number 1 < Number 2" << endl;  
    } while (status == true);
    for(num1; num1 <= num2; num1++)
    {
        for(int j = num1; j <= num2; j++)
        {
            if((j == 1 && j%2 == 0 && j%3 == 0 && j%5 == 0 && j%7 == 0)
            &&(j !=2 &&j !=3 &&j !=5 &&j !=7))
            {
                sum += (j * j);
                cout << j << " ";
            }
        }
    }
    cout << endl;
    cout << "Sum = " << sum << endl;
    return(0);
}