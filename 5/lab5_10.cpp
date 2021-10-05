#include <iostream>
using namespace std;
void sort3(int &v1, int &v2, int &v3);
int main()
{
    int value1, value2, value3;
    cout << "Enter three integer number : ";
    cin >> value1 >> value2 >> value3;
    int output1, output2, output3;
    output1 = value1;
    output2 = value2;
    output3 = value3;
    sort3(output1,output2,output3);
    cout << value1 << " " << value2 << " " << value3;
    cout << " in sorted order is ";
    cout << output1 << " " << output2 << " " << output3 << endl;
    return(0);
}

void sort3(int &v1, int &v2, int &v3){
    int tmp;
    if(v1 > v2){
        tmp = v1;
        v1 = v2;
        v2 = tmp;
    }
    if(v1 > v3){
        tmp = v1;
        v1 = v3;
        v3 = tmp;
    }
    if(v2 > v3){
        tmp = v2;
        v2 = v3;
        v3 = tmp;
    }
}