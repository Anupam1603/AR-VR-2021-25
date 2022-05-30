#include<iostream>
using namespace std;
int main(){
    int i, n;
    cout<<"enter the value of n ";
    cin>> n;
   int a, b, next;
   a =0;
   b=1;
   if(n==1){
       cout<< a;
   }
   else if(n==2){
       cout<< b;
       
   }
   next = a +b;
   for(i=3 ; i<=n ; i++){
       a =b;
       b= next ;
       next = a+b;

   }
   cout<< next;
   return 0;


}