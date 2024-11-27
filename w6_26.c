#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
char i,k,j,a[n+1];
	scanf("%s",a);
for(i=0;i<n;i++)
{
	k=1;
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		{
		k=0;
		break;
	    }
    }
	if(k==1)
	{
	printf("%c",a[i]);
	break;
	}

}
}



