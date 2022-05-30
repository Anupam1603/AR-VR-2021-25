//Program to find largest and smallest number in array
#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n, num, min, max;
    vector<int> v;
    cout << "How many integer you want to insert:";
    cin >> n;
    cout << "Enter an integer array:";

    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }

    // while(cin>>num){
    //     v.push_back(num);
    // }

    max = min = v[0];
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > max)
            max = v[i];
        if (v[i] < min)
            min = v[i];
    }
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
    return 0;
}