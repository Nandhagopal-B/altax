#include<stdio.h>
int main()
{
	int a[20],i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
			{	
				printf("%d is equal to its index value %d\n",a[i],i);
			}
	}
}
