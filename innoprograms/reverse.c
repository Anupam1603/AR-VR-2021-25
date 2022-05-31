void main()
{
    int n;
    int r=0;
    int d=0;
    printf("enter n");
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10)
    {
        d=i%10;
        r=r*10+d;
    }
    printf("%d",r);
}
