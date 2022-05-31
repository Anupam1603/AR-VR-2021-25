// #include<iostream>
// using namespace std;

// int main(){
//     int n , i ,j;
//     int arr[n];
//     cout<<"enter the length of array";
//     cin>> n;
//     cout<<"enter the elements of array";
//     for(i=0;i<n;i++){
//         cin>> arr[i];
//     }
//     int sum =0;
//     for(j=0; j<=n; j++){
//         sum=sum+arr[j];
//     }
//     cout<<"the sum is"<<sum;
//     return 0;

// }




#include <iostream>
using namespace std;
int Sum(int arr[], int n){
   if(n == 1){
      return arr[n-1];
   }
   return arr[n-1] + Sum(arr, n-1);
}
int main(){
    int i , n;
    int arr[n];
    cout<< "enter the length of array";
    cin>> n;
    cout<<"enter the elements";
    for(i=0;i<n; i++){
        cin>> arr[i];
    }
   cout<<"The sum of elements in a given array is"<<Sum(arr, n);
   return 0;
}