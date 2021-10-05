#include <iostream>
using namespace std;
int main()
{
    int book,toy,model,stationery;
    int sum = 0;
    float saraly = 1000;
    cout << "Input number of Books : ";
    cin >> book;
    cout << "Input number of Toys : ";
    cin >> toy;
    cout << "Input number of Model : ";
    cin >> model;
    cout << "Input number of Stationery : ";
    cin >> stationery;

    book *= 120;
    toy *= 80;
    model *= 50;
    stationery *= 15;
    sum = book + toy + model + stationery;
    
    if(sum == 0){
        saraly -= (saraly * 0.5);
        cout << "Payment = " << saraly;
    }else if(sum > 0 && sum < 5000){
        saraly -= (saraly * 0.1);
        cout << "Payment = " << saraly;
    }else if(sum >= 5000 && sum < 10000){
        cout << "Payment = " << saraly;
    }else if(sum >= 10000 && sum < 100000){
        saraly += (sum * 0.05);
        cout << "Payment = " << saraly;
    }else{
        saraly += (sum * 0.1);
        cout << "Payment = " << saraly;
    }
    return(0);
}