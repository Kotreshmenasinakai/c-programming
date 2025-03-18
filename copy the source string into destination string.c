#include<stdio.h>
void main()
{
	char s[1000],d[1000];
        int i;	
	printf("Enter the source string :\n");
	scanf("%[^\n]", s);
        d[0]='\0';
	printf("\nsource string: %s \nDestination string: %s\n",s,d);

//	for(int len=0;s[len];len++);

	for (i=0;s[i];i++)
	{
	   d[i] = s[i];
          // s[i] = '\0';
	}
           d[i] = s[i];
  
	printf("\n\nFinal source string: %s\nFinal Destination string: %s\n",s,d);
}

