#include<stdio.h>
int main ()
{
	int m1,m2,m3,m4,m5;float per;
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	per=(m1+m2+m3+m4+m5)/500.0*100;
	if(per>=60)
	printf("first");
	else if(per>=50)
	printf("second");
	else if(per>=40)
	printf("third");
	else
	printf("fail");
	return 0;
}
