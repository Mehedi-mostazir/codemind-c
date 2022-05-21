#include<stdio.h>
int main()
{
    int n,i=1;
    scanf("%d",&n);
    float sum;
    while(i<=n)
    {
        sum=sum+(1/(i*1.0));
        i++;
    }
    printf("%.2f",sum);
}