/* 

*****
 ****
  ***
   **
    * 

*/

#include<stdio.h>
void main()

{
	int i,j,c=6;
	for(i=0; i<5; i++)
	{	for(j=5 ;j>5-i && j>=0 ;j--)
                      printf(" ");
                   for(int k=0 ;k<j;k++)
                      printf("*");

	 printf("\n");
  	}
}
