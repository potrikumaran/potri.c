#include<stdio.h>
#include<string.h>
int main()
{
	
	int n,i,j,t,k=1;
	scanf("%d",&n);
	char a[n+1],b[t+1];
	printf("enter the word:");
	scanf("%s",a);
	t=strlen(a);
		for(i=0,j=t-1;i<n;i++,j--)
		b[j]=a[i];
	for(i=0;i<n;i++)
	{
	if(a[i]!=b[i])
	{
		k=0;
		break;
	}
	}
	if(k==1)
	printf("palindrome");
	else
	printf("not palindrome");
}
		
