#include<stdio.h>
int main(){
	int a,b,j,n,i;
	scanf("%d",&n);
	a=0;b=1;
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a);
		j=a+b;
		a=b;
		b=j;
	}
	return 0;
}
