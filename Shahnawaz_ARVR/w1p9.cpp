//Program to calculate length of an array
#include<iostream>

using namespace std;

int main() {
    char arr[50];
    int i = 0;
    while (arr[i] != '\0')
        i++;
    cout << "Length of Array is : " << i;
    return 0;
}