#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
fflush(stdin);
char a[n+1];int i=0;
	gets(a);
	while(a[i]!='\0')
	{
		int k=0;
		if(((a[i]>=65)&&(a[i]<=90))||((a[i]>=97)&&(a[i]<=122))||(a[i]==' '))
		k=1;
		else
		{
		k=0;
		break;}
		i++;
	}
	if(k==1)
	printf("panagram");
	else
	printf(" not panagram");
	}
