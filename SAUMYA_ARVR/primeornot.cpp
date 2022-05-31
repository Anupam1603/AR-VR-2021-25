#include<iostream>
using namespace std;

int main(){
    int n ,i;
    cout<<"enter your number";
    cin>> n;
    bool isprime=1;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"not a prime no.";
            isprime = 0;
        }
    }
    if (isprime==0){
        cout<<"not is prime number ";
    }
    else {
        cout<<"prime no.";
    }
return 0;
}