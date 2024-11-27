#include<stdio.h>
int main ()
{
	int s,i,n;
	scanf("%d",&n);i=1;
	while(i<=10)
	{
		s=n*i;
		printf("%d*%d=%d\n",n,i,s);
		i++;
	}
	return 0;
}
