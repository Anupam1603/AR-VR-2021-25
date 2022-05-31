//FACTORIAL USING ITERATIVE METHOD

#include <iostream>
using namespace std;

int main(){
    int fact=1, i, j, n;
    cin>>n;//4
    for(i=1;i<=n;i++)//1|2|3|4
    {
        fact = fact * i;//1*1,1*2=2,2*3=6,6*4=24
    }
    cout<<"\n factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}