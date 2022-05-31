void main()
{
    int n;
    int c=0;
    printf("enter");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    printf("prime");
    else
    printf("not prime");
}