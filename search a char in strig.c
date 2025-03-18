#include<stdio.h>
void main()
{
	char s[20];
        char ch;
	printf("Enter the string of 19 charecter.\n");
	scanf("%s", s);
        printf("Enter the charecter\n");
        scanf(" %c",&ch);

	printf("String Is: %s \n", s);

	int len,i;
	for(len=0;s[len];len++);

	for(i=0;s[i];i++)
            if(s[i] == ch)
             {
               printf("charecter %c is present\n",ch);
               return;
             }
        
        printf("charecter %c is not present\n",ch);
}
