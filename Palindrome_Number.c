#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,sum,value,rem;
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	for(i=0;i<n;i++)
	{
	    value=a[i];
		sum=0;
		while(a[i]>0)
		{
        rem=a[i]%10;
        sum=(sum*10)+rem;
      
        a[i]=a[i]/10;
        }
        if(value != sum)
        {
        	printf("False
");
		}
		else
		{
			printf("True
");
		}
	}
	 
        
	return 0;

}