/* 
 
A
A*
A*C
A*C*
A*C*E
 
*/

#include<stdio.h>
void main()
{
	int i,j;
        char a='A';
	for(i=0;i<5;i++)
	{
		for(j=0; j<=i; j++)
                      if(j%2 ==0)
                         printf("%c",a+j);
	    	      else
                         printf("*");
                           
         printf("\n");
	}
}
