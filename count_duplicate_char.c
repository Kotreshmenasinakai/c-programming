#include<stdio.h>
void show_count_of_duplicate(const char *);
void main()
{
	char s[100] , ch;
	printf("enter the string\n");
	scanf("%[^\n]", s);
	show_count_of_duplicate(s);				
        printf("string is  %s\n", s);
}

void show_count_of_duplicate(const char *q)
{       
		char p[100];
	int i, len, count;
		for( int i=0; q[i] ; i++)
			p[i]= q[i];
		p[i]= '\n';
		for(len=0; p[len]; len++);

	for(i=0 ; p[i] ; i++)
	{  
		count=0;
		for(int j=i+1 ; p[j] ; j++)
		{      
			if(p[i] != ' ') 
				if(p[i] == p[j])
				{
					for(int k=j ; p[k] ; k++)
						p[k] = p[k+1];
					j--;
					count++;
	 				}
		}
         if(count != 0)
             printf(" %c ----> %d \n", p[i], count+1);
	}
}
