//Program to swap two numbers without using third variable
#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    cout << "Enter two numbers:\n";
    cin >> n1 >> n2;
    cout << "Before Swapping: \nn1=" << n1 << "\nn2=" << n2 << endl;
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    cout << "After Swapping: \nn1=" << n1 << "\nn2=" << n2;
    return 0;
}