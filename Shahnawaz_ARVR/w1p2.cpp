// Program to check given number is prime or not
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 1)
        cout << "Not a Prime Number";
    else {
        for (int i = 2; i < n; i++) {
            if ((n % i) == 0) {
                cout << n << " is not Prime";
                return 0;
            }
        }
        cout << n << " is a Prime number";
    }
    return 0;
}