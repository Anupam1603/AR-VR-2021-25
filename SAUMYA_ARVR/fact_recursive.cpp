#include<iostream>
using namespace std;

int fact(int n){
    while(n==0){
        return 1;
    }

    return n*fact(n-1);

}

int main(){
    int n ;
    cout<<"enter the value of n ";
    cin>> n;
    cout<<"your nth term of factorial series is"<< fact(n);
    return 0;

}