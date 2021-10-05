#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i = 15;
    int student = 2;
    int menu;
    string Name[15];
    int attendance[i];
    int homework[i];
    int quiz[i];
    int midexam[i];
    int finalexam[i];
    int sum[i];
    char grade[i];
    
    while (menu != 0){
        menu();
        cin >> menu;
        if (menu == 1){
            inputname(Name);
        }
        if (menu == 2){
            for (int i = 0; i < 15; i++){
                attendance[i]=scoreclassroom();
            }
        }
    }

    for (i = 0; i < student; i++)
    {
        
        
    
        do {
            cout << "Input attendance: ";
            cin >> attendance[i];
        } while (attendance[i] < 0 || attendance[i] > 5);
        
        do {
            cout << "Input homework: ";
            cin >> homework[i];
        } while (homework[i] < 0 || homework[i] > 15);

        do {
            cout << "Input quiz: ";
            cin >> quiz[i];
        } while (quiz[i] < 0 || quiz[i] > 10);

        do {
            cout << "Input midexam: ";
            cin >> midexam[i];
        } while (midexam[i] < 0 || midexam[i] > 30);

        do {
            cout << "Input finalexam: ";
            cin >> finalexam[i];
        } while (finalexam[i] < 0 || finalexam[i] > 30);        
        cout << "\n";
        sum[i] = attendance[i] + homework[i] + quiz[i] + midexam[i] + finalexam[i];

        if(sum[i] >= 80)
            grade[i] = 'A';
        else if(sum[i] >= 70)
            grade[i] = 'B';
        else if(sum[i] >= 60)
            grade[i] = 'C';
        else if(sum[i] >= 50)
            grade[i] = 'D';
        else
            grade[i] = 'E';
    }
    
    for (i = 0; i < student; i++)
        {
            cout << Name[i] << " " << grade[i] <<" "<< endl;
        }

    if (menu == 0){
        cout << "End" << endl;
    }

    return(0);
}

void menu(){
        cout << "select menu fo grade" << endl;
        cout << "1 .) input name student" << endl;
        cout << "2 .) input score classroom" << endl;
        
        cout << "please Enter number 1 - 5 exit 0" << endl;

    }
void inputname(string Name[15]){
    for(i = 0; i < 15; i++){
                cout << "Input Name: ";
                cin >> Name[i];
            }
}
int scoreclassroom(){
    int classroom;
    cout << "input score :";
    cin >> classroom;
    return(classroom);
}