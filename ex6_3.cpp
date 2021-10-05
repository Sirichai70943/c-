#include <iostream>
using namespace std;
int main(){
    int number;
    int count_positive = 0;
    int count_negative = 0;
    int i = 1;

    /* do
    {
        cout << "Enter Number : ";
        cin >> number;
        if(number > 0){
            count_positive++;
        }
        if(number < 0){
            count_negative++;
        }
    } while (number != 0);
    cout << endl;
    cout << "count_positive = " << count_positive << endl;
    cout << "count_negative = " << count_negative << endl; */

    for(i; i <= 5; i++){
        cout << "Enter Number : ";
        cin >> number;
        if(number > 0){
            cout << "positive." << endl;
        }else if(number < 0){
            cout << "negative." << endl;
        }else{
            cout << "Zero." << endl;
        }
    }  
    return(0);
}