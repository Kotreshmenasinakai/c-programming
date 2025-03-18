#include<stdio.h>
void main()
{
	char s[10],ch;
	int i,len,idx;

	printf("enter the string\n");
	scanf("%[^\n]",s);
	printf("enter the charecter that you want add to the string :\n");
	scanf(" %c",&ch);
	printf("enter the index number to add charecter : \n");
	scanf("%d", &idx);

	for(len=0;s[len];len++);

	if(sizeof(s)>len+1)
	{
		for(i=len ; i>=idx ;i--)
		{
			s[i+1] = s[i];
		}
                i++;
		s[i] = ch;
		printf("after adding the charecter to you prefered index string: %s \n",s);
	}
	else
		printf(" The string size is not sufficient for holding the extara charecter.\n");
}
