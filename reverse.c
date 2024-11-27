#include<stdio.h>
int main(){
	int n,j;
	scanf("%d",&n);
	while(n>0)
	{
		j=n%10;
		printf("%d",j);
		n=n/10;
	}
	return 0;
}
	
