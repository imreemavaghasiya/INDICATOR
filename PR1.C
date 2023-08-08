#include<stdio.h>

void swap(int *p,int *p1)
{

   int temp;
   
   temp = *p;
   *p = *p1;
   *p1 = temp;

	printf("Swepping Value A = %d\n",*p);
	printf("Swepping Value B = %d\n",*p1);
	
}

main()

{
	int a,b;
	int *p,*p1;
	
	printf("Enter value A = ");
	scanf("%d",&a);
	
	printf("Enter value B = ");
	scanf("%d",&b);
	
	swap(&a,&b);
	

	
	
	
	
}
