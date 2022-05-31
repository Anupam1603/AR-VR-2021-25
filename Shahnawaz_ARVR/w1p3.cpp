// Program to print Fibonacci seiries using iteration and recursion
#include <iostream>

using namespace std;
// int pt = 0, t = 1, nt = 0;
int pt = 0, t = 0, nt = 1;

void fib(int n);

int main() {
    int n, term = 0, nTerm = 1, pTerm;
    cout << "Enter number of terms of Fibonacci Series: ";
    cin >> n;
    cout << endl
         << "Fibonacci Series using iteration upto " << n << " terms are: "
         << endl;
    term = 0;
    nTerm = 1;
    for (int i = 0; i < n; i++) {
        cout << term << " ";
        pTerm = term;
        term = nTerm;
        nTerm = pTerm + term;
    }
    cout << endl
         << "Fibonacci Series using Recursion upto " << n << " terms are:"
         << endl;

    fib(n);

    return 0;
}

// Recursive function
void fib(int n) {
    if (n > 0) {
        cout << t << " ";
        pt = t;
        t = nt;
        nt = pt + t;
        fib(n - 1);
    }
}