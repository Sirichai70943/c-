#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int Minimun(int temp[][4], const int student, const int exam);
int Maximun(int temp[][4], const int student, const int exam);
double Average(int temp[], const int exam);
int main()
{   
    const int MaxStudent = 3;
    const int MaxExam = 4;
    int score[MaxStudent][MaxExam];
    srand((unsigned int) time(0));
    for(int r = 0; r < MaxStudent; r++)
        for(int c = 0; c < MaxExam; c++)
            score[r][c] = rand() % 30 + 50;
    cout << "           ";
    for(int c = 0; c < MaxExam; c++)
        cout << " [" << c << "] ";
    cout << endl;
    for(int r = 0; r < MaxStudent; r++)
    {
        cout << "Score[" << r << "] ";
        for(int c = 0; c < MaxExam; c++)
            cout << setw(5) << score[r][c];
        cout << endl;
    }
    cout << "\nLowest score : " << Minimun(score,MaxStudent,MaxExam);
    cout << endl;
    cout << "Highest score : " << Maximun(score,MaxStudent,MaxExam);
    cout << endl;
    cout << endl;
    for(int r = 0; r < MaxStudent; r++)
    {
        cout << "Average of Student " << r << " is ";
        cout << fixed << setprecision(2) << Average(score[r],MaxExam);
        cout << endl;
    }
    cout << endl;
    return(0);
}

int Minimun(int temp[][4], const int student, const int exam)
{
    int Lowscore = 100;
    for(int r = 0; r < student; r++)
    {
        for(int c = 0; c < exam; c++)
            if(temp[r][c] < Lowscore) Lowscore = temp[r][c];
    }
    return(Lowscore);
}


int Maximun(int temp[][4], const int student, const int exam)
{
    int Highscore = 0;
    for(int r = 0; r < student; r++)
    {
        for(int c = 0; c < exam; c++)
            if(temp[r][c] < Highscore) Highscore = temp[r][c];
    }
    return(Highscore);
}

double Average(int temp[], const int exam)
{
    int Total = 0;
    for(int r = 0; r < exam; r++)
        Total += temp[r];
    return((double)Total/exam);
}