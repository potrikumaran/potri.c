#include<stdio.h>
int main(){
	int j,i,n;
	scanf("%d",&n);
	j=0;
	while(n>0)
	{
		i=n%10;
		j=j+1;
		n=n/10;
	}
	printf("%d",j);
	return 0;
}
