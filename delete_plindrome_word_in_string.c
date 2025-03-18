#include<stdio.h>
void delete_word(char *, char *);
int palindrome(char *, char *);
void main()
{
	char s[100], *p, *q ;

	printf("enter the string : ");
	scanf("%[^\n]", s);

	p=q=s;

	while(*p)
	{
		q=p;
		while(*q != ' '&& *q != 0)
			q++;

		if(palindrome(p, q-1))
		{
			delete_word(p, q);
			q=p;
		}
                else
                {
             		p=q;
		        p++;
                } 

	}
        printf("%s\n", s);

}

void delete_word(char *p, char *q)
{      
        printf(" delete : %p  to %p \n ",p, q);
	while(*q)
	{
		*p=*(q+1);
		p++;
                q++;
	}
	*p=0;
}

int palindrome(char *p, char *q)
{
        printf("palindrome : %p to %p \n", p , q);
	while(p<q)
	{
		if(*p != *q) 
			break;
		p++;
		q--;
	}
	if(*p==*q)
		return 1; 
	else
		return 0;

}
