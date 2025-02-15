/*

5
**
543
****
54321

*/

#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(int j=0,k=5;j<=i; j++,k-=1)
                      if(i%2 ==0)
                         printf("%d",k);
	    	      else
                         printf("*");
                           
         printf("\n");
	}
}
