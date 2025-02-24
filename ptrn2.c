/* 
 
    1                        1 
   1 2                      12     
  1 2 3                    123
 1 2 3 4                  1234
1 2 3 4 5                12345  

*/

#include<stdio.h>
void main()

{
	int i,j,k;

	for(i=0; i<5; i++)
	{	for(j=0; j<=4-i; j++)
		       printf(" ");
                    for(k=0; k<=i; k++)
                           printf("%d ", k+1);  //remove space after %d to get a secand patern;

	 printf("\n");
  	}
}
