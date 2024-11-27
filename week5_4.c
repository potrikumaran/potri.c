#include<stdio.h>
int main()
{
	float z;
	scanf("%d",&z);
	float a[z],i,j,k;float sum=0;float avg;float t;float min,max;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<z;i++)
	sum=sum+a[i];
	avg=sum/z;
	for(j=0;j<z-1;j++)
	for(k=0;k<z-1-j;k++)
		if (a[k]>a[k+1])
		{
			t=a[k];
			a[k]=a[k+1];
			a[k+1]=t;
		}
	min=a[0];
	max=a[z-1];
printf("%d",min)
printf("%d%d"max,avg)
}
