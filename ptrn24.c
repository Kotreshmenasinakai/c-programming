/*

E D C B A
* D C B A
* * C B A
* * * B A
* * * * A

*/

#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(char m=69,j=0;j<=4;j++,m--)
		   { 
                     if(i>j)
                         printf("* ");
                     else
                         printf("%c ",m);
                   } 
         printf("\n");
	}
}
