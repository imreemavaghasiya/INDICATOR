#include<stdio.h>

main()
{
	int a[100];
	int *p,i,n;

	p = &a[0];
		
	printf("Enter Size Array = ");
	scanf("%d",&n);

	
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}

	p = &a[n-1];
	
	printf("Reverse Array : \n");
	
	for(i=n-1;i>=0;i--)
	{
		printf("\n%d ", *p);
		p--;
	}
	
}
