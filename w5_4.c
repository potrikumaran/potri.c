#include<stdio.h>
int main ()
{
	int i,t, n,a[i];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i=i+2)
	{
		t=a[i+1];
		a[i+1]=a[i];
		a[i]=t;
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	
}
