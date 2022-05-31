//SUM OF ARRAY ELEMENTS

#include <iostream>
using namespace std;
#define SIZE 5

int main(){
    
    int i, sum=0;
    //cin>>N;
    int arr[SIZE];
    for (i = 0;i < SIZE;i++)
    {
        cin>>arr[i];
    }
    for (i = 0;i < SIZE;i++)
    {
        sum+=arr[i];
    }
    cout<<"\n"<<sum<<endl;
    
    return 0;
}