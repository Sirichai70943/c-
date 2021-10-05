#include <iostream>
using namespace std;
int main()
{
    // declare and initial array
    //int a[] = {1,2,3,4,5,6,7,8,9,10};
    int a = 1;
    const int array_size = 10;
    int sum = 0;
    // Compute sum value in array
    for(int i = 0; i < array_size; i++){
        sum = sum + a;
        a++;
    }
    // Display result
    cout << "Total of array elements : " << sum << endl;
    return(0);
}