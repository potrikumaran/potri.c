#include<stdio.h>
int main()
{
	char j;
	scanf("%c",&j);
	if((j>=97)&&(j<=122))
	printf("lower");
	else if((j>=65)&&(j<=90))
	printf("upper");
	return 0;
}
