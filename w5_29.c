#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i,j,k,a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
j=a[0];k=0;
for(i=0;i<n;i++)
{
	if(j!=a[i])
	k++;
}
printf("%d",k);
}
