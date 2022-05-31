#include <stdio.h>
int fibo(int n)
{
    if(n==1)
    {
        return 1;
    }
     else if(n==0)
    {
        return 0;
    }
   else return (fibo(n-1)+fibo(n-2));
}
void main()
{
    int num,i;
    printf("enter the number of elements");
    scanf("%d",&num);
    printf("fibonacci series\n");
    for(i=0;i<num;i++)
    {
        printf("%d",fibo(i));
    }
}