//FACTORIAL USING RECURSION

#include <iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    int n, a;
    cin>>n;//4
    cout<<"\n factorial of "<<n<<" is "<<fact(n)<<endl;
    return 0;
}