#include <stdio.h>

main()
{
	
	int a,b,add,sub,mul;
	float div;
	printf("Enter Two Numbers");
	scanf("%d %d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("Addition Is %d\n",add);
	printf("Subtraction Is %d\n",sub);
	printf("Multiplication Is %d\n",mul);
	printf("Division Is %f\n",div);

}

