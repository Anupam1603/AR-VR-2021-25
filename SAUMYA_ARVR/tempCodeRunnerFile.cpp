#include<iostream>
using namespace std;

int main(){
    int n , i ,j;
    int arr[n];
    cout<<"enter the length of array";
    cin>> n;
    cout<<"enter the elements of array";
    for(i=0;i<n;i++){
        cin>> arr[i];
    }
    int sum =0;
    for(j =0; j<n; j++){
        sum= sum + j;
    }
    cout<<"the sum is"<<sum;
    return 0;

}