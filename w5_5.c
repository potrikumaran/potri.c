#include<stdio.h>
int main ()
{
	int i,j, n,a1[n],a2[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a1[i]);
	for(i=0,j=n-1;i<n;i++,j--)
	a2[j]=a1[i];
	for(i=0;i<n;i++)
	a1[i]=a2[i];
	for(i=0;i<n;i++)
	printf("%d",a1[i]);
}
