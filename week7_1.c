#include<stdio.h>
int fun(int *,int);
int main ()
{
	int n;
	scanf("%d",&n);
	int i,a[n],avg;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	avg=fun(a,n);
	printf("%d",avg);
}
int fun(int *p,int i)
{
	int avg,j;int sum=0;
	for(j=0;j<i;j++)
	{
	sum=sum+ *p;
	p++;}
	avg=sum/i;
	return(avg);
}
