#include<stdio.h>
int main()
{
    int n,value,rem,sum;
    scanf("%d",&n);
    value=n;
    sum=0;
    while(n>0)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    if(value==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
    
}