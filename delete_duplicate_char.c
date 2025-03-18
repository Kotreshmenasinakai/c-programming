#include<stdio.h>
void delete_duplicate(char *);
void main()
{
	char s[100] , ch;
	printf("enter the string\n");
	scanf("%[^\n]", s);
	delete_duplicate(s);
	printf("string after deleting duplicate char : %s\n",s);
}

void delete_duplicate(char *p)
{
	int len, i;
	//	for(len=0; p[len]; len++);

	for(i=0 ; p[i] ; i++)
	{  
		for(int j=i+1 ; p[j] ; j++)
		{      
			if(p[i] != ' ') 
				if(p[i] == p[j])
				{
					for(int k=j ; p[k] ; k++)
						p[k] = p[k+1];
					j--;
				}
		}   
	}
}
