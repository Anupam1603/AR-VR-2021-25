//REVERSE AN INTEGER

#include <iostream>
using namespace std;

int main(){
    
    int n, val, rem;
    //int new_num;
    cin>>n;
    while(n!=0)
    {
        rem = n%10;
        val = val * 10 + rem;
        //new_num = rev + r;
        n=n/10;
        
    }

    cout<<endl<<val<<endl;

    return 0;
}

/*567

567%10=7
567/10=56
rev=7*10+(56%10)=70+6=76
56%10=6
56/10=5
rev=76*10+(5%10)=760+5=765*/