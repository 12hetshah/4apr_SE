//Swapping of two no. without using third variable 

#include<stdio.h>
main()
{
	int a,b;
	printf("Enter A And B");
	scanf("%d %d",&a,&b);
	a= a+b;
	b=a-b;
	a=a-b;
	printf(" No.A After Swap %d\n ",a);
	printf(" No.B After Swap %d\n ",b);
	
	
	
	
	
	
}
