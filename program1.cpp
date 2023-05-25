#include<stdio.h>
main()
{
  int i,row,col;
  for(i=1;i<=5;i++)
  {
    for(row=1;row<=i;row++)
    {
      printf("%d",row%2);
    }
    printf("\n");
	}
}
  
