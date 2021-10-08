#include <iostream>
#include <string>
using namespace std;
void ParseName(string &FirstName, string &LastName, const string FullName);
int main(){
    string Name = "Stroustrup, Bjarne";
    string LastName, FirstName;

    ParseName(FirstName,LastName,Name);
    Name = FirstName + " " + LastName;
    cout << "Name : " << Name << endl;
    return(0);
}

void ParseName(string &FirstName, string &LastName, const string FullName)
{
    int i = FullName.find(",");
    LastName = FullName.substr(0,i);
    FirstName = FullName.substr(i+2,FullName.size());
}