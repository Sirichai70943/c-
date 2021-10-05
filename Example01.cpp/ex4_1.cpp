#include <iostream>
using namespace std;
int main()
{
    int salary,hour;
    char late,overtime;
    cout << "Enter Salary : ";
    cin >> salary;
    do
    {
        cout << "Late (Y/N) : ";
        cin >> late;
    } while (late == 'y' || late == 'Y');
        salary += 1000;
    do
    {
        cout << "Over Time Hour (Y/N) : ";
        cin >> overtime;
    } while (overtime == 'n' || overtime == 'N');

    cout << "Enter OT Hour : ";
    cin >> hour;

    salary += (hour * 200);
    
    cout << "Salary : " << salary << endl;
    return(0);

}