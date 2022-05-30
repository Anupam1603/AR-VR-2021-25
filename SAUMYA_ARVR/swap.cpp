#include <iostream>
using namespace std;

int main(){
    int c,a,b;
    cin >> a ;
    cin >> b;
    
    a= a + b;
    b = a-b;
    a=a-b;
    cout << a << endl << b;
    return 0;


}