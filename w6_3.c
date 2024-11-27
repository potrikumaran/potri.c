#include<stdio.h>
int main()
{
	int n,m,j=0,i=0;
	scanf("%d%d",&n,&m);
	fflush(stdin);
	char a[n],b[m];
	scanf("%s",a);
	scanf("%s",b);
		fflush(stdin);
		while(a[i]!='\0')
		i++;
		while(b[j]!='\0')
		{
		a[i]=b[j];
		i++;
		j++;
	}
	printf("%s",a);
}
	
