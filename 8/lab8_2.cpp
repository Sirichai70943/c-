#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
void GetandWrite(ofstream &Outfile);
void ReadandDisplay(ifstream &Infile);
int main()
{
    string Filename;
    ifstream Infile;
    ofstream Outfile;
    cout << "Enter file name : ";
    cin >> Filename;
    cout << endl;
    // open output file for write data
    Outfile.open(Filename.c_str());
    cout << "Now open file " << Filename << " for write." << endl;
    GetandWrite(Outfile);
    Outfile.close();
    cout << "Now close file "  << Filename << ".\n\n";
    // open input file for read data
    Infile.open(Filename.c_str());
    cout << "Now open file " << Filename << " for read." << endl;
    ReadandDisplay(Infile);
    Infile.close();
    cout << "Now close file " << Filename << ".\n\n";
    return(0);
}

void GetandWrite(ofstream &Outfile)
{
    string id, name, surname;
    int score;
    // Get data from keyboard
    for(int n = 1; n <= 3; n++)
    {
        cout << "\nStudent No. " << n << endl;
        cout << "Enter ID : ";
        cin >> id;
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter SurName : ";
        cin >> surname;
        cout << "Enter Score : ";
        cin >> score;
        // write value( intgeter number ) to output file
        Outfile << id << " " << name << " ";
        Outfile << surname << " " << score << endl; 
    }
    cout << endl;
}


void ReadandDisplay(ifstream &Infile)
{
    string id, name, surname;
    int score;
    // Read name from input file
    for(int n = 1; n <= 3; n++)
    {
        // read name from input file
        Infile >> id >> name >> surname >> score;
        cout << id << " " << name << " " << surname;
        cout << " " << score << endl;

    }
    cout << endl;
}