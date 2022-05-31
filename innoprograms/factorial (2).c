

#include <stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
void main()
{
    int n,x;
    printf("enter a number");
    scanf("%d",&n);
    x=fact(n);
    printf("%d",x);

}