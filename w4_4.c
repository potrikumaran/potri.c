#include<stdio.h>
int main()
{
	int i,j,s,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(s=1;s<=i-1;s++)
		printf(" ");
		for(j=1;j<=n-s;j++)
		printf("*");
		printf("\n");
	}
}
