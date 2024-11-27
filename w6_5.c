#include<stdio.h>
int main()
{
	
	int n,i,j;
	scanf("%d",&n);
	char a[n+1],b[n+1];
	
	fflush(stdin);
	
	for(i=0;i<n;i++)
	scanf(" %c",&a[i]);
		for(i=0,j=n-1;i<n;i++,j--)
		b[j]=a[i];
		for(i=0;i<n;i++)
		printf("%c",b[i]);
	}
		
