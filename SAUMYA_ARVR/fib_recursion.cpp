#include<iostream>
using namespace std;

int fib(int n ){
    int a , b;
    if(n==1|| n==2){
        return (n-1);
    }
    return fib(n-1) + fib(n-2);

}
int main (){
    int n ;
    cout<<"enter the value of n ";
    cin>> n;
    cout<<"your nth term of fibonacci series is"<< fib(n);
    return 0;
}