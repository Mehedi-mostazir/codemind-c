#include<stdio.h>
int pal(int p)
{
    int rev=0,r;
    while(p)
    {
        r=p%10;
        rev=rev*10+r;
        p=p/10;
    }
    return rev;
    
}
int main()
{
    int lw,up,i;
    scanf("%d %d",&lw,&up);
    for(i=lw;i<=up;i++)
    {
        if(i==pal(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}