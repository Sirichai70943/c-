#include <iostream>
#include <cmath>
using namespace std;
int max(int num1, int num2); 
int main()
{
    int a = 1800;
    int b = 1000;
    int ret;
    ret = max(a, b);
    cout << "Max value is : " << ret << endl;
}

int max(int num1, int num2){
    cout << num1 << " : " << num2 <<endl;

    int result;
    if(num1 > num2){
        result = num1;
    }else{
        result = num2;
    }
    return(result);
} 