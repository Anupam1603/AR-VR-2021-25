//CALCULATE THE LENGTH OF AN ARRAY

#include <iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"length of the array = "<<size<<endl;

    return 0;
}