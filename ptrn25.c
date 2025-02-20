/*

1
2 6
3 7 10
4 8 11 13
5 9 12 14 15

*/

#include<stdio.h>
void main()
{
	int i,j,a,s,b;
	for(i=0,a=1;i<=4;i++)
	{
		for(j=0,s=4;j<=i;j++)
                    {
                     if(j==0)
                     {
                       printf("%d",a);
                       b=a;
                       a++;
                     }
                     else
                      {
                       printf("%d",b=b+s);
                       s--;
                      }
                    }
         printf("\n");
	}
}
