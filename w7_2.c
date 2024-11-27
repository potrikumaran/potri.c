#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*p,max=0;
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",&p[i]);
	for(i=0;i<n;i++)
	{
		if(max<p[i])
		{
			max=p[i];
		}
	}
	printf("%d",max);
	free(p);
}
