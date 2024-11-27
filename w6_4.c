#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	fflush(stdin);
	char a[n+1],b[n+1];
	for(i=0;i<n;i++)
	scanf("%c",&a[i]);
		for(i=0;i<n;i++)
		b[i]=a[i]+32;
		for(i=0;i<n;i++)
		printf("%c",b[i]);
	}
		
