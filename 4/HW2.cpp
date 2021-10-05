#include <iostream>
using namespace std;
int main()
{   
    int num;
    int score = 0;
    int sum = 0;
    
    cout << "Enter number student : ";
    cin >> num;
    for(int n = 1; n <= num; n++)
    {
        do{
            cout << "Enter score ("<< n <<") : ";
            cin >> score;
            sum = sum + score; 

            if(score > 5 || score < 0) {
                cout << "Enter Score agin " << endl;
                cout << "Enter score ("<< n <<") : ";
                sum = sum - score;
                cin >> score;
                sum = sum + score;
            }
        }
        while (n > num);
     }
    float avg;
        avg = (float) sum /  num;
        cout << "\nTotal Number of Students " << num << endl;
        cout << "Average Score = " << avg << endl;
    return(0);
}