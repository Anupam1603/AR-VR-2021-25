//Program to reverse an integer

#include <iostream>

using namespace std;

int main() {
    int n, r;
    cout << "Enter an integer";
    cin >> n;
    while (n) {
        r = r * 10 + (n % 10);
        n /= 10;
    }
    cout << "Reversed integer: " << r;
    return 0;
}