#include<stdio.h> 
int main()
{
	int i,j,s,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=1;s<=n-i;s++){
		
		printf(" ");}
		for(j=1;j<=i;j++)
		printf("*");
		printf("\n");
	}
}
