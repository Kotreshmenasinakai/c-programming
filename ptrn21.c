/*
    E
   12
  CDE
 1234
ABCDE

*/

#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<4-i;j++)
			printf(" ");
		for(char k=0,m=65,n=49;k<=i;k++,m++,n++)
		{
			if(i%2 == 0)
				printf("%c",m+j);
			else
				printf("%c",n);
		}  
		printf("\n");
	}
}
