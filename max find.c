#include<stdio.h>
int main()
{
	int t1,t2,t3,max;
	scanf("%d%d%d",&t1,&t2,&t3);
	if(t1>t2)
	{
	if(t1>t3)
	max=t1;
	else 
	max=t3;
}
else 
{
	if(t2>t3)
	max=t2;
	else 
	max=t3;
}
printf("%d",max);
return 0;
}
