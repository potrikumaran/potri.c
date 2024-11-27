#include<stdio.h>
int main()
{
	int n,i,t=0,z=0,x=0,d=0;
	scanf("%d",&n);
	char a[n+1];
	scanf("%s",a);
	for(i=0;i<n;i++)
	{
		if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='i'))
		t++;
		else if (a[i]==32)
		z++;
		else if ((a[i]>=48)&&(a[i]<=57))
		x++;
		else
		d++;
	}
	printf("no.of vowels=%d\n no.of consonants=%d\n no of whites=%d\n no.of numbers=%d",t,d,z,x);
}
