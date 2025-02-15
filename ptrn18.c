/*

******
13579
****
135
**
1

 
*/

#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<=5;i++)
	{
		for(j=1; j<=12-i*2; j+=2)
                      if(i%2 ==0)
                         printf("*");
	    	      else
                         printf("%d",j);
                           
         printf("\n");
	}
}
