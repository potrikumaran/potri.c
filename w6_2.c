#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	fflush(stdin);
	char a[n+1],b[n+1];
	for(i=0;i<n+1;i++)
	scanf("%c",&a[i]);
		for(i=0;i<n+1;i++)
		b[i]=a[i];
		for(i=0;i<n+1;i++)
		printf("%c",b[i]);
	}
		
