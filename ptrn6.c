/* 
 
    *
   * *
  * * * 
 * * * *
* * * * *

*/

#include<stdio.h>
void main()

{
	int i,j,c=6;
	for(i=1; i<=5; i++)
	{	for(j=0 ; j<5-i ;j++)
                      printf(" ");
                   for(int k=1 ;k<=i;k++)
                      printf("* ");

	 printf("\n");
  	}
}
