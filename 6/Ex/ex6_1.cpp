#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
void isPalindrome(char number[]);
int main() {
    int d;
    char text[100] = {};
    cout << "Enter your text : ";
    cin >> text;
    d = strlen(text) - 1;
    for(int i = 0; i <= strlen(text)-1; i++) {
            cout << text[i] << " = "  << text[d] << endl;
            d--;
    }
    isPalindrome(text);
    return 0;
}

void isPalindrome(char number[]) {
    bool flag = true;
    int d = (strlen(number) - 1);
    for (int i = 0; i <= d; i++) {
        if (number[i] != number[d]) {
        flag = false;
        }
        d--;
    }
    if (flag == false) {
        cout << "This is not palindrome text " << endl;
    } else {
        cout << "This is palindrome text ";
    }
}