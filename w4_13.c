#include<stdio.h>
int main()
{
	int n,i,j,s;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		printf("*");
		for(s=1;s<=(2*n-2*i);s++)
		printf(" ");
		for(j=1;j<=i;j++)
		printf("*");
		printf("\n");
	}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n+1-i;j++)
		printf("*");
		for(s=1;s<=(2*i-2);s++)
		printf(" ");
		for(j=1;j<=n+1-i;j++)
		printf("*");
	printf("\n");
		}
	
}
		
