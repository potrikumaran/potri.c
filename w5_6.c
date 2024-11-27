#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i,t,k,j,m,l,a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
	if(a[j]>a[j+1])
	{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
	}
}
}
printf(" enter k");
scanf("%d",&k);
m=a[k-1];
l=a[n-k];
printf("the %d smallest is %d and %d largest is %d",k,m,k,l);
}
