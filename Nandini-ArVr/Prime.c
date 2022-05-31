#include<stdio.h>
#include<conio.h>

void main(){
    int n,check,flag;
    printf("Enter number");
    scanf("%d",&n);
    for(int i = 2; i < n; i++){
        check=n%i;
        if(check==0){
            printf("Not prime");
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Number is prime");        
        }
}