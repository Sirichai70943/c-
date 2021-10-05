#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
    int data[10];
    srand((unsigned int) time(0));
    // Initial Value in array
    for(int i = 0; i < 10; i++) data[i] = rand() % 30 + 1;
    // Display histogram
    cout << "Element Value Histogram " << endl << endl;
    for(int i = 0; i < 10; i++){
        cout << setw(5) << i << " " << setw(4) << data[i] << " ";
        for (int k = 1; k <= data[i]; k++) cout << "*";
        cout << endl;
    }
    return(0);
}