#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(2*i-1);j++)
		{
			if(j%2==0)
			printf("*");
			else
			printf("%d",i);
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(2*(n-i)+1);j++)
		{
			if(j%2==0)
			printf("*");
			else
			printf("%d",4-i+1);
		}
		printf("\n");
	}
}
