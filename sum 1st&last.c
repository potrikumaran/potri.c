#include<stdio.h>
int main(){
	int r,n,l;
	scanf("%d",&n);
	l=n%10;
	while(n>10)
	n=n/10;
	r=l+n;
	printf("%d",r);
	return 0;
}
