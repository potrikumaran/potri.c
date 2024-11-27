#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	char a[n+1];
	scanf("%s",a);
	for(i=0;i<n;i++)
	if((a[i]>=65)&&(a[i]<=90))
	{
		printf("%c",a[i]);
		break;
	}
}
