/*
    #
   AB
  ###
 ABCD
#####

*/

#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<4-i;j++)
			printf(" ");
		for(char k=0,m=65;k<=i;k++,m++)
		{
			if(i%2 != 0)
				printf("%c",m);
			else
				printf("#");
		}  
		printf("\n");
	}
}
