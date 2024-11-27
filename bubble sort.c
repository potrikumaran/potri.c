#include<stdio.h>
#define k 5
int main()
{ 
int a[k],f,i,j,t;
for(f=0;f<k;f++)
scanf("%d",&a[f]);
for(i=0;i<k-1;i++)
for(j=0;j<k-1-i;j++)
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
return 0;
}
