#include<stdio.h>
int main()
{
    int n,r,a;
    scanf("%d",&n);
    r=0;
    while(n)
    {
        a=n%10;
        r=r*10+a;
      
        n=n/10;
    }
    printf("%d",r);
    return 0;
    
}