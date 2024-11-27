#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i,k,j,a[n];
for(i=0;i<n;i++)
{ 
	scanf("%d",&a[i]);
}
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
	printf("%d",a[i]);
	break;
	}

}
}



