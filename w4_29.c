#include<stdio.h>
int main()
{
	int s,i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n-1;i++)
	{
		for(s=1;s<=n-i;s++)
		printf(" ");
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			printf("*");
			else
			printf("-");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(s=1;s<=i-1;s++)
		printf(" ");
		for(j=1;j<=n-i+1;j++)
		{
			if(i%2!=0)
			printf("*");
			else
			printf("-");
		}
		printf("\n");
	}
}
