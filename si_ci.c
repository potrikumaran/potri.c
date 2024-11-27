#include<stdio.h>
#include<math.h>
int main()
{
	float si,p,r,t,a,ci;
	scanf("%f%f%f",&p,&r,&t);
	si=p*r*t/100;
	a=pow(1+r/100,t)*p;
	ci=a-p;
	printf("%f\n%f",si,ci);
	return 0;
}
