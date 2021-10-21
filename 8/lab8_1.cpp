#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
    string Filename;
    ifstream Infile;
    ofstream Outfile;
    int value;
    srand(time(0));
    cout << "Enter file name : ";
    cin >> Filename;
    cout << endl;
    // open output file for write data
    Outfile.open(Filename.c_str());
    cout << "Now open file " << Filename << " for write" << endl;
    // Get name from keyboard
    for(int n = 1; n <= 10; n++)
    {
        value = rand() % 100;
        cout << setw(5) << value;
        // write value( intgeter number ) to output file
        Outfile << value << " ";
    }
    cout << endl;
    Outfile.close();  // close output file
    cout << "Now close file " << Filename << ".\n\n";
    // open input file for read data
    Infile.open(Filename.c_str());
    cout << "Now open file " << Filename << " for read." << endl;
    // Read name from input file
    for(int n = 1; n <= 10; n++)
    {
        Infile >> value;
        cout << setw(5) << value;
    }
    cout << endl;
    Infile.close();  // close input file
    cout << "Now close file " << Filename << ".\n\n";
    return(0);
}