#include <iostream>
using namespace std;
int main()
{  
    int cut = 10;
    for(int i = 1; i <= 100; i++){
        cout << i << "\t";
        if(i == cut){
            cut = cut + 10;
            cout << endl;
        }
    }
    return(0);
}