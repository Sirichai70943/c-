#include <iostream>
using namespace std;
int main()
{
    int Score;
    cout << "Enter Score : ";
    cin >> Score;

    if(Score >= 50){
        cout << "You Pass.";
    }
    else{
        cout << "You Failed !!!";
    }
    return(0);
}