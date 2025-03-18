#include<stdio.h>
void main()
{
	char s[1000];
	char *p =s;
	printf("Enter the string charecter.\n");
	scanf("%[^\n]", s);
	printf("String Is: %s \n\n", s);

	for(len=0;s[len];len++);
	for(i=0;s[i];i++,p++)
	{       
		if(*p >='a' && *p <='z')
		{
			*p = *p-32;
			printf(" %c  revised as  : %c ",*p+32,*p)

		}
	}
	p=s;
	printf("Final Converted string: %s\n",*p);
}
