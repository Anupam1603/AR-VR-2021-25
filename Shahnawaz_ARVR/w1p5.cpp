//Program to calculate factorial using iterative method and recursion
#include <iostream>

using namespace std;

int fac(int n);

int main() {
    int n, num, fact = 1;
    cout << "Enter a positive number to calculate its factorial:";
    cin >> num;
    n = num;

    //Using Iterative method
    if (n == 0)
        fact = 1;
    else
        while (n) {
            fact = fact * n;
            n--;
        }
    cout << "Factorial using iteration is :" << fact << endl;

    //Using recursive method
    cout << "Factorial using recursive method is : " << fac(num);

    return 0;
}

//Recursvie funtion
int fac(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return (n * fac(n - 1));
}