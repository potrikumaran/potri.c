#include<stdio.h>
int main()
{
	int d,m,y;
	scanf("%d%d%d",&d,&m,&y);
	if((m==4)||(m==6)||(m==9)||(m==11)&&(d<=30))
	{
		if((d<30)&&(d>=1))
		d++;
		else{
		d=1;
		m++;;}
	}
	else if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)&&(d<=31))
	{
		if((d<31)&&(d>=1))
		d++;
		else {
		d=1;
		m++;}
	}
	else if(m==2)
	{
		if((y%4==0)&&(y%100!=0)||(y%400==0)&&(d<=29))
		{
		if((d<29)&&(d>=1))
		d++;
		else {
		d=1;
		m++;}
	}
	else
	{
		if((d<28)&&(d>=1))
		d++;
		else {
		if(d=28)
		d=1;
		m++;}
	}
	}
	else if((m==12)&&(m<=31))
	{
		if((d<31)&&(d>=1))
		d++;
		else {
		d=1;
		m=1;
		y++;}
	}
	else
	printf("invalid");
	printf("%d %d %d",d,m,y);
	return 0;
}
