/*

A1B2C
A1B2
A1B
A1
A
 
*/

#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(char a=65,b=49,j=0; j<5-i ; j++)
                      if(j%2 ==0)
                         printf("%c",a++);
	    	      else
                         printf("%c",b++);
                           
         printf("\n");
	}
}
