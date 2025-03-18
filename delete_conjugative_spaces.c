#include<stdio.h>
void delete_conjugative_spaces(char *);
void main()
{
	char s[100] , ch;
	printf("enter the string\n");
	scanf("%[^\n]", s);
	delete_conjugative_spaces(s);
	printf("string after deleting duplicate char : %s\n",s);
}

void delete_conjugative_spaces(char *p)
{
	int len, i;
	//	for(len=0; p[len]; len++);

	for(i=0 ; p[i] ; i++)
	{  
		if(p[i] == ' ' && p[i+1] == ' ')
		{
			for(int j=i+1 ; p[j] ; j++)
			{
				p[j] = p[j+1];      
			} 
			i--;
		}   
	}
}
