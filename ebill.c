#include <stdio.h>
int main()
{
	float e_bill,unit,s_ch,ch,limit;
	scanf("%f%f%f%f",&unit,&ch,&limit,&s_ch);
	if (unit<limit)
	e_bill=ch*unit;
	if (unit>limit)
	e_bill=ch*unit+(s_ch*(unit-limit));
	printf("%f",e_bill);
	return 0;
	
}
