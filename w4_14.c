#include<stdio.h>
int main()
{
	int i,j,s,n;
	scanf("%d",&n);
	for(i=1;i<=n-1;i++)
	{
		for(s=1;s<=n-i;s++)
		printf(" ");
		for(j=1;j<=(2*i-1);j++)
		printf("*");
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(s=1;s<=i-1;s++)
		printf(" ");
		for(j=1;j<=(-2*i+11);j++)
		printf("*");
		printf("\n");
	}
}
