/* 
 
1
ab
234
cdef
56789

*/

#include<stdio.h>
void main()

{
	int i,j;
        char c = 'a';
        j=1;
	for(i=1; i<=5; i++)
	{	for(int k=1 ; k<=i;k++ )
			if(i%2 != 0)
                        {
			 printf("%d", j++);
 			}
			else
			{
                         printf("%c",c++);
			}

	 printf("\n");
  	}
}
