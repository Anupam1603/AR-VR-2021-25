//Program to calculate square root of a given number
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int num;
    cout << "Enter a number:";
    cin >> num;
    if (num >= 0)
        cout << "Square root of " << num << " is " << sqrt(num);
    else
        cout << "Can not calculate square root of negative numbers";
    return 0;
}