#include<stdio.h>
void main()
{
	char s[20],t;
	printf("Enter the string of 19 charecter.\n");
	scanf("%s", s);

	printf("Before : %s \n", s);

	int len,i,j;
	for(len=0;s[len];len++);

	for(i=0,j=len-1; i<j ; i++,j--)
	{ 
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}

	printf("After : %s \n",s);

}
