#include<stdio.h>
int main(){
	int n,i,j,t;
	printf(" enter the digits");
	scanf("%d",&n);
	j=0;t=n;
	while(t>0)
	{
	i=t%10;
	j=j*10+i;
	t=t/10;
}

if(j==n)
printf("palindrome");
else 
printf("not a palindrome");
return 0;
}
