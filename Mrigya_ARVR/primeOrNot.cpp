//PRIME OR NOT

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int n, i, c=0;
    cin>>n;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        cout<<endl<<n<<" is prime."<<endl;
    }
    else{
        cout<<"\nnot prime.";
    }
    return 0;
}

/*

*/