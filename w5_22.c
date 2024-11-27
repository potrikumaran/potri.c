#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i,k,j,a1[n][n],a2[n][n];
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
scanf("%d",&a1[i][j]);
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
scanf("%d",&a2[i][j]);
}
printf(" enter 1 for add ,enter any no. for sub");
scanf("%d",&k);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
if(k==1)
{
printf("%d",a1[i][j]+a2[i][j]);
}
else
{
printf("%d",a1[i][j]-a2[i][j]);
}
printf("\n");
}
}
