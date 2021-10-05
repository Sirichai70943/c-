#include <iostream>
using namespace std;
int main()
{
    int day,mounth,year;
    int count = 0;
    bool status = true;
    cout << "Please enter day month year : ";
    cin >> day >> mounth >> year;
    
    if(day > 0 && day <= 30){
        day -= 1 ;
        for(int i = 1; i <= day; i++){
            count++;
        }
    }else{
        cout << "Day Error!!!" << endl;
        status = false;
    }
    if(mounth > 0  && mounth <= 12){
        mounth -= 1;
        for(int n = 1; n <= mounth; n++){
            count += 30;
        }
    }else{
        cout << "Mounth Error!!!" << endl;
        status = false;
    }
    if(year >= 2513 && year <= 2599){
        year -= 2513;
        for(int y = 1; y <= year; y++){
            count += 360;
        }
    }else{
        cout << "Year Error!!!" << endl;
        status = false;
    }
    if(status == true){
        cout << "\nThe difference is about " << count << " days." << endl;
    }else{
        cout << "Program Error!!!" << endl;
    } 
    return(0);
}