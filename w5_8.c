#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i,j,count,a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
count=0;
for(i=0;i<n;i++)
{
	count=0;
	for(j=i+1;j<n;j++)
	{
	if(a[i]==a[j])
	count++;
}
	if(count==0)
	printf("%d",a[i]);
}
}
