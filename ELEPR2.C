#include<stdio.h>

main()

{
	int a[100];
	int *p, i, n;
	
	p = a;
	printf("Enter Size of Array = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
		
	
	}
	p = a;
	printf("Array Elements : ");
	
	for(i=0;i<n;i++)
	{
		printf("%d, ",*(p+i));
	
	}
	
}
