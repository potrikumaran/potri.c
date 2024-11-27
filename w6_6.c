#include<stdio.h>
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	fflush(stdin);
	char k;char a[n];
	scanf("%s",a);
fflush(stdin);
	printf("enter the character to check 1st occurance" );
	scanf("%c",&k);
	for(i=0;i<n;i++)
	{
		count=i;
		if(k==a[i])
		break;
	}
	printf("%d",count);
}
