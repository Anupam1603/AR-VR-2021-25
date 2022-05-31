//Program to count occurance of a given character using 
#include <iostream>
#include <stdio.h>
#include<cstring>

using namespace std;

int main() {
    char str[20], ch;
    int i = 0;
    cout << "Enter  a string:";
    cin >> str;
    cout << "Enter a character:";
    cin >> ch;
    while (str[i] != '\0') {
        if (ch == str[i]) {
            cout << "Character '" << ch << "' found at position:" << i + 1 << " & Index:" << i;
            return 0;
        }
        i++;
    }
    cout << "Character " << ch << " not found";

    return 0;
}