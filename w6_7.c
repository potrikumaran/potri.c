#include<stdio.h>
int main()
{
	int n,i,j,count=0;
	scanf("%d",&n);
	fflush(stdin);
	char a[n+1],b[n+1];
	scanf("%s",a);
	scanf("%s",b);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		if(a[i]==b[i])
		j=1;
		else
		{
			j=0;
			break;
		}
		
	}
	if(j==1)
	printf("equal");
	else
	printf("not equal");
}
	
	
