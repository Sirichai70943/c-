#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
using namespace std;
void rand_num(int rand_num1[5], int &votenumber);
int main()
{
    int votenumber = 0;
    int student_num = 500;
    int rand_num1[5];
    int vote_result, chairman_num;
    int perc_votenum,percent_vote, vote_num = 0, no_vote, perc_no_vote;

    cout << "Enter number student chairman : ";
    cin >> chairman_num;
    cout << "Number of right student : " << student_num << endl;

    srand((unsigned int)time(0));
    vote_num = (rand() % 500);

    votenumber = vote_num;
    percent_vote = vote_num;
    perc_votenum = ((vote_num * 100) / student_num);
    cout << "Number of Votes : " << vote_num << " = " << fixed << setprecision(1) << perc_votenum << "%" << endl;
    no_vote = student_num - vote_num;
    perc_no_vote = ((no_vote * 100) / student_num);
    cout << "Number of not Votes : " << no_vote << " = " << perc_no_vote << "%" << endl;
    cout << "Result of election chairman" << endl;
    cout << "---------------------------" << endl;
    cout << "No.\tVotes\tPercent(%)" << endl;

    rand_num(rand_num1,votenumber);
    
    vote_result = rand_num1[5] + votenumber;
    cout << "1." << "\t" << rand_num1[0] << "\t" << float(((rand_num1[0] * 100)/percent_vote)) << "%" << endl;
    cout << "2." << "\t"<< rand_num1[1] << "\t" << float(((rand_num1[1] * 100)/percent_vote)) << "%" << endl;
    cout << "3." << "\t"<< rand_num1[2] << "\t" << float(((rand_num1[2] * 100)/percent_vote)) << "%" <<endl;
    cout << "4." << "\t"<< rand_num1[3] << "\t" << float(((rand_num1[3] * 100)/percent_vote)) << "%" << endl;
    cout << "5." << "\t"<< vote_result << "\t" << float(((vote_result * 100)/percent_vote)) << "%" << endl;
    cout << "---------------------------" << endl;
    cout << "Total\t" << percent_vote << "\t" << ((percent_vote * 100)/percent_vote) << "%" << endl;
    return (0);
}

void rand_num(int rand_num1[5], int &votenumber) 
{
    for (int i = 0; i < 5; i++) {
            rand_num1[i] = ((rand()) % votenumber);
            votenumber = votenumber - rand_num1[i];
    }
}