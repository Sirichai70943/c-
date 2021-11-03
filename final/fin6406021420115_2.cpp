#include <iostream>
using namespace std;
void insertnum(int X[], int num);
int main()
{   
    int num;
    bool flag = true;
    int B,E,X;
    cout << "How many numbers in array A : ";
    cin >> num;

    int A[num];
    cout << "Enter " << num << " integers for array A : ";
    for(int i = 1; i <= num; i++){
        cin >> A[i];
    }


    E = num - 1;
    while (flag == true)
    {
        flag = true;
        for(int c = 1; c < num; c++){
            for(int r = 1; r < num; r++){
            if(A[r] > A[r+1]){
                B = A[r];  
                A[r] = A[r+1]; 
                A[r+1] = B;

                flag = false;
            }
            E = E + 1;
            }
        }
    }
    
    cout << "The final array A : " ;
    for(int i = 1; i <= num; i++){
        cout << A[i] << " ";
    }
   return(0);
}
