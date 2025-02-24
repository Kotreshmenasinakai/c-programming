/* 
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    * 

*/

#include<stdio.h>
void main()

{
	int i,j;  
	for(i=1; i<=5; i++)
	{	for(j=0 ;j<5-i ;j++)
                      printf(" ");
                   for(int k=j; k<5; k++)
                      printf("*");

	 printf("\n");
  	}  
       
	for(i=1; i<=4; i++)
	{	for(j=4 ;j>=5-i && j>=0 ;j--)
                      printf(" ");
                   for(int k=0 ;k<=j;k++)
                      printf("*");

	 printf("\n");
  	}  
}        
