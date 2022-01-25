#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    scanf("%d",&n);
    
    for(;n>0;n=n/10)
    {
        rem=n%10;
        
        sum=sum*10+rem;
    }
    printf("%d",sum);
}