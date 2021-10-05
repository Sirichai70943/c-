#include <iostream>
using namespace std;
int main()
{
    float hh,mm,ss,kilometers,meters,kilostart,kiloend,speed,hour;

    cout << "Data inputs are integer !." << endl;
    cout << "Enter start kilometer : ";
    cin >> kilostart;
    cout << "Enter end kilometer : ";
    cin >> kiloend;
    cout << "Enter time used(hour minute second) : ";
    cin >> hh >> mm >> ss;
    cout << endl;
    hour = hh + (mm/60) + ((ss/60)/60);
    kilometers = kiloend - kilostart;
    speed =  kilometers / hour;
    
    cout << "Car traveled " << kilometers << " kilometers in " << hh << " hrs " << mm << " min " << ss << " sec." << endl;
    cout << "Average velocity was " << speed << " kph.";
    return(0);
}