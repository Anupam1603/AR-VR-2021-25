//Program to find sum of array elements
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    int sum, num;
    cout << "Enter numbers end with \\n" << endl;
    while (cin >> num) {
        v.push_back(num);
        sum += num;
    }
    cout << "Sum of All elements of array : " << sum;
    return 0;
}