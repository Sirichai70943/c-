#include <iostream>
using namespace std;
int main()
{
    int num;
    int sum = 0;
    int count = 0;
    cout << "Enter number : ";
    cin >> num;
    for(int n = 1; n <= num; n++)
    {
        for(int j = 1; j <= n; j++)
        {
            if((j%1==0)&&(n%j == 0))
            {
                count = count + 1;
            }
        }
        if(count == 2)
        {
            cout << n << " ";
            sum += n; // sum = sum + n
        }
        count = 0;
    }
    cout << "\nSum = " << sum << endl;
    return(0);
}