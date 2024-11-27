#include<stdio.h>
int main()
{
int n,m;
scanf("%d%d",&n,&m);
int i,k,j,a1[n][m],a2[m][n];
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
scanf("%d",&a1[i][j]);
}
for(i=0;i<n;i++)
for(j=0;j<m;j++)
a2[j][i]=a1[i][j];
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d ",a2[i][j]);
printf("\n");
}
}


