#include<iostream>
using namespace std;

int main(){
    int i , n;
    cin >> n ;
    if(n<1){
        cout<< "1";
    }
    int fact =1;
    for(i=1; i<=n ; i++){
       fact = i*fact;
    }
    cout<<fact;
    return 0;
}