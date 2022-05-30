#include<iostream>
using namespace std;

int main(){
    int i , n;
    int arr[n];
    cout<<"enter the length of array";
    cin>> n;
    cout<<"enter the elements";
    for(i=0;i<n;i++){
        cin>> arr[i];
    }
   int max = arr[0];
    for(int i=0;i<n;i++){
        if( max < arr[i]){
            max = arr[i];
        }
        
    }
    int min =arr[0];
    for(int i =0; i<n ; i++){
        if( min > arr[i]){
            min = arr[i];
        }
    }
    cout<<"the min term is"<< min <<endl<< "and max is "<<max;

    return 0;

}