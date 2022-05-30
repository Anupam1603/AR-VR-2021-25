//SWAP TWO NUMBERS WITHOUT USING THIRD VAR

#include <iostream>
using namespace std;

int main(){

    int a, b;
    cin>>a;
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" and "<<b;
    
    return 0;
}