#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i,j,a[n][n];
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(((i==j)&&(a[i][j]==1))||((i!=j)&&(a[i][j]==0)))
printf(" identity matrix");

}
