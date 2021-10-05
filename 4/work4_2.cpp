#include <iostream>
#include <string>
using namespace std;
int main()
{
    int month;
    cout << "Enter number month : ";
    cin >> month;

     if(month == 1){
         cout << "month Jan.";
    }else if(month == 2){
       cout << "month Feb.";
    }else if(month == 3){
       cout << "month Mar.";
    }else if(month == 4) {
       cout << "month Apr.";
    }else if(month == 5){
        cout << "month May.";
    }else if(month == 6){
        cout << "month Jun.";
    }else if(month == 7){
        cout << "month Jal.";
    }else if(month == 8){
        cout << "month Aug.";
    }else if(month == 9){
        cout << "month Sep.";
    }else if(month == 10){
        cout << "month Oct.";
    }else if(month == 11){
        cout << "month Nov.";
    }else if(month == 12){
        cout << "month Dec.";
    }else{
         cout << "no month.";
    }

    return(0);
}