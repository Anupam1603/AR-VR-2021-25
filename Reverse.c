#include<stdio.h>
#include<conio.h>

void main(){
    int n,i,rev=0;
    printf("Enter number\n");
    scanf("%d",&n);
    //4321=1234//
    while(n>0){
        i=n%10;
        rev=(rev*10)+i;
    }
    printf("Reverse of number is%d",rev);
    getch();
}