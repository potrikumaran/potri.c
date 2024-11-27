#include<stdio.h>
int main()
{
	int i,j,k,q,n;
	
	
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the maximum value");
	scanf("%d",&q);
	
	int count[q];
	for(i=0;i<q;i++)
	count[i]=0;
	for(i=0;i<n;i++)
	count[a[i]]++;
	printf("Enter the element whose count u require");
	scanf("%d",&k);
	printf("%d",count[k]);
}
	
	
	
	
	
	
	
	
}
