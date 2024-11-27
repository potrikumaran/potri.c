#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i,sum,j,a[n][n];
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
sum=0;
for(i=n-1,j=0;((i<n)&&(j<n));i--,j++)
sum=sum+a[i][j];
printf("%d",sum);
}
