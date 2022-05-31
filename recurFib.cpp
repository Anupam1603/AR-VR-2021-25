#include <iostream>
using namespace std;

int fib(int n){
      
      if(n==1||n==0)
      return n;
      return fib(n-1)+fib(n-2); 
}
int main()
{
    int n = 0, i, a1, a2;
    cout<<"enter the number of terms : ";
    cin>>a1;
    for(i=0;i<a1;i++)
    {
      a2 = fib(n);
      cout<<a2<<" ";
      n++;
      }
    return 0;
}
    