#include<stdio.h>
main()
{
	int i,num;
	printf("Enter No.");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++)
	{
		printf("\n %d*%d=%d",i,num,num*i);
	}
}
