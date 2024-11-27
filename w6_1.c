#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	char a[n+1];int t=0;
	fflush(stdin);
	for(i=0;i<n;i++)
	scanf("%c",&a[i]);
	
	for(i=0;i<n+1;i++)
	{
		if(a[i]!='\0')
        t++	;
	}
	printf("%d",t);
}

