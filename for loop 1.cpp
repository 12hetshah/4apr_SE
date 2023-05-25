#include<stdio.h>
main()
{
	
	int i,num;
	printf("enter No. ");
	scanf("%d",&num);
	
	for(i=1; i<=10; i++)
  {
  printf("%d * %d = %d", num, i, (num*i));}
  
}
