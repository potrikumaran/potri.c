#include<stdio.h>
int main()
{
	int n,i,j,num;
	scanf("%d",&n);
	num=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
		{
		printf("%d",num);
		num++;}
		
		printf("\n");
		
	}
}
