#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,t;
	scanf("%d",&n);
	char a[n+1];char *p;
	scanf("%s",a);
	t=strlen(a);
	for(i=0;i<t+1;i++)
	if(a[i]=='\0')
	p=&a[i-1];
	for(i=0;i<t;i++)
	{
	printf("%c",*(p));
	p--;}
}
	
