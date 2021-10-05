/*  จัดทำโดย
    6406021420018 จิรนันท์ ศรีบุญจันทร์
    6406021420069 ธนพล ชมภูทอง
    6406021420247 จิรพัฒน์ มนตรีวงษ์
    6406021420115 ศิริชัย บุญม     
*/
#include <iostream>
using namespace std;
void menu();
void inputValue(string NameLname[15], int Classroom[15], int Homework[15], int Test[15],  int Mid[15], int Final[15], int Total[15]);
void TotelScore(string NameLname[15], int Classroom[15], int Homework[15], int Test[15],  int Mid[15], int Final[15], int Total[15]);
void CalGrade(int Total[15], string NameLname[15], string Grade[15]);
int main()
{
    int menus = 1;
    string NameLname[15], Grade[15];
    int Classroom[15], Homework[15], Test[15], Mid[15], Final[15], Total[15];
     
    while (menus != 0)
    {
        menu();
        cout << "Enter number choice : ";
        cin >> menus;
        if(menus == 1){
            inputValue(NameLname, Classroom, Homework, Test, Mid, Final, Total);
        } 
        if(menus == 2)
        {
            TotelScore(NameLname, Classroom, Homework, Test, Mid, Final, Total);
        }
        if(menus == 3)
        {
            CalGrade(Total, NameLname, Grade);
        }
    }
   return 0;
}

void menu(){
    cout << "1 Input Value." << endl;
    cout << "2 Totel Score." << endl;
    cout << "3 Calculate Grade." << endl;
    cout << "0 Exit." << endl;
}

void inputValue(string NameLname[15], int Classroom[15], int Homework[15], int Test[15],  int Mid[15], int Final[15], int Total[15])
{
    
    for (int i = 0;i <= 2;i++)
    {
        cout << "Enter Name : ";
        cin >> NameLname[i];
        do{
            cout << "Enter Classroom : ";
            cin >> Classroom[i];
        }while(Classroom[i] < 0 || Classroom[i] > 5);
        do{
            cout << "Enter Homework : ";
            cin >> Homework[i];
        }while(Homework[i] < 0 || Homework[i] > 15);
        do{
            cout << "Enter Test : ";
            cin >> Test[i];
        }while(Test[i] < 0 || Test[i] > 10);
        do{
            cout << "Enter Mid : ";
            cin >> Mid[i];
        }while(Mid[i] < 0 || Mid[i] > 30);
        do{
            cout << "Enter Final : ";
            cin >> Final[i];
        }while(Final[i] < 0 || Final[i] > 30);
        cout << "------------------" << endl;
        Total[i] = Classroom[i] + Homework[i] + Test[i] + Mid[i] + Final[i];
    }
} 

void TotelScore(string NameLname[15], int Classroom[15], int Homework[15], int Test[15],  int Mid[15], int Final[15], int Total[15])
{
    for (int k = 0;k <= 2;k++)
    {
        cout << "Name : " << NameLname[k] << endl;
        cout << "Classroom : " << Classroom[k] << "/5" << endl;
        cout << "Homework : " << Homework[k] << "/15" << endl;
        cout << "Test : " << Test[k] << "/10" << endl;
        cout << "Mid : " << Mid[k] << "/30" << endl;
        cout << "Final : " << Final[k] << "/30" << endl;
        cout << "Total Score : " << Total[k] << "/90" << endl;
        cout << "------------------" << endl;

    }
}

void CalGrade(int Total[15], string NameLname[15], string Grade[15])
{
    for(int j = 0;j <= 2;j++)
    {
        if(Total[j] >= 80){
            Grade[j] = "A";
        }else if(Total[j] >= 70){
            Grade[j] = "B";
        }else if(Total[j] >= 60){
            Grade[j] = "C";
        }else if(Total[j] >= 50){
            Grade[j] = "D";
        }else{
            Grade[j] = "F";
        }
        cout << "Name : " << NameLname[j] << endl;
        cout << "Total Score : (" << Total[j] << "/90)";
        cout << " Grade : " << Grade[j] << endl;
        cout << "-----------------------------------------" << endl;
    }
}