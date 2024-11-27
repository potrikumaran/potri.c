#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i,a1[n],a2[n];
for(i=0;i<n;i++)
scanf("%d",&a1[i]);
for(i=0;i<n;i++)
a2[i]=a1[i];
for(i=0;i<n;i++)
printf("%d",a2[i]);
}
