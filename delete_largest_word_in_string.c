#include<stdio.h>
void main()
{
	char s[100];
	int large=0,c=0;
	int i, j, s_a, e_a;
        printf( "enter the string : ");
        scanf( "%[^\n]", s);
        printf("\n");

	for(i=0;s[i]; i++)
	{
		for(j=i; s[j] != 0 && s[j] != ' ';j++)
			c++;

		if(c > large)
		{       
                        large=c;    
			s_a = i;
			e_a = j;
		}

		i=j;
		c=0;

	}

        for(i=s_a , j=e_a; s[j]; i++, j++)
               s[i] = s[j+1];
        s[i]= 0;
       
        printf("after : %s \n ", s);
}
