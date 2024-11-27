#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i,k,t,a[n],sum1,sum2;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
sum1=0;sum2=0;t=0;
for(i=0;i<(n/2);i++)
sum1=sum1+a[i];
for(i=0;i<n;i++)
sum2=sum2+a[i];
t=sum2-sum1;
while((sum1+k)!=t)
k++;
printf("%d",k);
}


