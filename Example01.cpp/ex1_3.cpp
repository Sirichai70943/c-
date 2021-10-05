#include <iostream>
using namespace std;
int main()
{
    int score,project,midterm,final,grade;
    for(int i = 1; i <= 3; i++){
        cout << "Enter Project score : ";
        cin >> project;
        cout << "Enter Midterm score : ";
        cin >> midterm;
        cout << "Enter Final score : ";
        cin >> final;
        
        if(project > 20){
            cout << "Project score Error !!!" << endl;
            project = 0;
        }
        if(midterm > 30){
            cout << "Midterm score Error !!!" << endl;
            midterm = 0;
        }
        if(final > 50){
            cout << "Final score Error !!!" << endl;
            final = 0;
        }
        score = project + midterm + final;
        cout << "Total Score : " << score << endl;

        if(score >= 80 && score <= 100){
            cout << "Grade : A" << endl;
        }else if(score >=70 && score <= 79){
            cout << "Grade : B" << endl;
        }else if(score >=60 && score <= 69){
            cout << "Grade : C" << endl;
        }else if(score >=50 && score <= 59){
            cout << "Grade : D" << endl;
        }else if(score >= 0 && score <= 49){
            cout << "Grade : F" << endl;
        }else{
            cout << "Grade : " << endl;
        }
    }
    return(0);
}