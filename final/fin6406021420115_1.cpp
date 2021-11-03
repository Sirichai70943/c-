#include <iostream>
using namespace std;
int match(int symmetry[]);
int main()
{  
    int number[13];
    int count;
    cout << "Enter 13 integers : ";
    for(int i = 1; i <= 13; i++){
        cin >> number[i];
    }
    match(number);
    return(0);
}

int match(int symmetry[])
{
    bool flag = true;
    int count = 13;
    for(int i = 1; i <= count-1; i++){
        if(symmetry[i] != symmetry[count]){
            flag = false;
        }
        count--;
    }
    if(flag == false){
        cout << "Not symmetry." << endl;
    }else{
        cout << "Symmetry." << endl;
    } 
    return(flag);
}

