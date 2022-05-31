#include<stdio.h>
#include<conio.h>

void main(){
    int n,sum;
    printf("Enter size of array");
    scanf("%d",&n);
    
    int arr[n];
   
    for(int i = 0; i<n; i++){
        printf("Enter number");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum%d",sum);
}