#include<stdio.h>
int main()
{
	int i,j,s,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(s=1;s<=i-1;s++)
		printf(" ");
		for(j=1;j<=(2*(n-i)+1);j++)
		{
			if((j==1)||(j==(2*(n-i)+1)))
			printf("*");
			else
			printf("-");
		}
		printf("\n");
	}
}
