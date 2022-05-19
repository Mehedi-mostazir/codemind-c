#include<stdio.h>
int main()
{
    int n,temp,sum=0,sqr;
    scanf("%d",&n);
    sqr=n*n;
    temp=n;
    while(sqr)
    {
        sum=sum+(sqr%10);
        sqr=sqr/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}
