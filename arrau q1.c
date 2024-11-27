#include<stdio.h>
int main ()
{
	int z;
	scanf("%d",&z);
	int a[z],i,j;float sum=0.0;float avg;int max=0;
	for(i=0;i<z;i++)
	scanf("%d",&a[i]);
	for(i=0;i<z;i++)
	sum=sum+a[i];
	avg=sum/z;
	printf("%f %f",sum,avg);
	for(i=0;i<z;i++)
	{
	if(max<a[i])
	max=a[i];
}
	printf("%d",max);
	return 0;

}
	
