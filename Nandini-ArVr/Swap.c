#include<stdio.h>
#include<conio.h>

void main(){
    int a,b;
    printf("Enter 2 numbers");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swaped numbers are%d%d",a,b);
}