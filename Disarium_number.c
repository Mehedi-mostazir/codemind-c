#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,rev=0,temp,rem1,sum=0,i,c=0;
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    temp=rev;
    while(temp>0)
    {
        rem1=temp%10;
        c++;
        sum=sum+pow(rem1,c);
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}