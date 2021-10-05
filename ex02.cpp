#include <iostream>
using namespace std;
int main()
{
    int area, price_area, sum;
    char material,size;

    cout << "Enter the area : ";
    cin >> area;
    if(area >= 20 && area <= 40){
        price_area = 200000;
        size = 'S';
    }else if (area > 40 && area <= 100)
    {   
        price_area = 200000 + ((area - 40) * 3000);
         size = 'M';
    }else if (area > 100)
    {
        price_area = 150000 + 200000 + ((area - 60) * 2000);
         size = 'L';
    }else {
        cout << "Error." << endl;
    }
    
    cout << "Enter type of the material : ";
    cin >> material;

    if(material == 'B' || material == 'b'){
        if(size == 'S') {sum = price_area + (area * 5000);}
        if(size == 'M') {sum = price_area + (area * 7500);}
        if(size == 'L') {sum = price_area + (area * 15000);}
        cout << "The house will cost " << sum << " bath build." << endl;
    }else if(material == 'G' || material == 'g'){
        if(size == 'M') {sum = price_area + (area * 10000);}
        if(size == 'L') {sum = price_area + (area * 20000);}
        cout << "The house will cost " << sum << " bath build." << endl;
    }else if(material == 'P' || material == 'p'){
        if(size == 'M') {sum = price_area + (area * 15000);}
        if(size == 'L') {sum = price_area + (area * 30000);}
        cout << "The house will cost " << sum << " bath build." << endl;
    }else {cout << "Error" << endl;}
    return(0);
}


       