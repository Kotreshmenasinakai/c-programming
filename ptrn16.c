/* 
 
13579
 3579
  579
   79
    9
 
*/

#include<stdio.h>
void main()
{
	int i,j;

	for(i=1 ; i<=9; i+=2)
	{
		for(j=1; j<i; j+=2)
                     printf(" ");
	    		for(int k=i; k<=9; k+=2)
                           printf("%d",k);
                           
         printf("\n");
	}
}
