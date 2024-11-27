#include<stdio.h>
int main()
{ 
int yr,mon,day;
scanf("%d%d",&yr,&mon);
if(mon==2)
{
if((yr%4==0)&&(yr%100!=0)||(yr%400==0)
day=29;
else 
day=28;
}
printf("%d",day);
return 0;

}
