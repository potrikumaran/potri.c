#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if ((a==b)&&(a==c)&&(b==c))
	printf("eq");
	else if((a==b)||(a==c)||(b==c))
	printf("iso");
	else
	printf("scalene");
	return 0;
	
}
