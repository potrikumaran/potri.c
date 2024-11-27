#include<stdio.h>
int main()
{
	int n,i,j,t;
	scanf("%d",&n);
	char a[n+1];
	scanf("%s",a);
	for(i=0;i<n-1;i++)
	for(j=0;j<n-1-i;j++)
	{
		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
	puts(a);
}
