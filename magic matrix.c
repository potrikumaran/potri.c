#include<stdio.h>
int main()
{
	int i,j,num,n;
	printf("enter of order magic matrix:");
	scanf("%d",&n);
	int a[n][n];num=1;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	a[i][j]=0;
	i=n/2;
	j=n-1;
	while(num<=(n*n))
	{
	if((i==-1)&&(j==n))
	{
		i=0;
		j=n-2;
}
else
{
	if(i==-1)
	i=n-1;
	if(j==n)
	j=0;
}
if(a[i][j]!=0)
{
	i++;
	j=j-2;
	continue;
}
else
{
	a[i][j]=num;
	num++;
}
i--;
j++;
}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	    printf("%d ",a[i][j]);
	    printf("\n");
}
}

