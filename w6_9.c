#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	char a[n+1];
	scanf("%s",a);
	for(i=0;i<n;i++)
	{
		if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='i'))
		printf("%c",a[i]);
	}
}
