#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i,a[n];float avg;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
float sum=0;
for(i=0;i<n;i++)
{
	sum=sum+a[i];
	avg=sum/(i+1);
	printf("%.2f",avg);
}
}
