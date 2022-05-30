//0,1,1,2,3,5,8,13...
//sum of previous 2 digits -- Fibonacci

#include<stdio.h>
#include<conio.h>

void main(){
    int n;
    printf("Enter the lenght of Fibonacci series");
    scanf("%d",&n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for(int i=2; i<=n; i++){
        fib[i] = fib[i-1] + fib[i-2];
        scanf("%d",&fib[i]);
    }
    for(int j=0; j<n; j++){
        printf("%d\t",fib[j]);
    }
    
}