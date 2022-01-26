#include<stdio.h>
#include<math.h>

int main()
{
    int n,r,s;
    scanf("%d",&n);
    
    r=sqrt(n);
    s=(r*r);
    if(s==n)
    printf("True");
    else
    printf("False");
    return 0;
}