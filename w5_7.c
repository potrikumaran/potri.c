#include<stdio.h>
int main ()
{
	int i,k,count=0;int n,a[i];
	scanf("%d",&n);
	printf("enter number:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		count++;
	}
	printf("number %d is present %d times",k,count);
}
