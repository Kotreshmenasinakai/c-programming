#include<stdio.h>
void main()
{
	char ch[20],a[5],b[3];

	int i,j,len1,len2;

	printf("Enter the string ch \n");
	scanf("%[^\n]", ch);
	printf("Enter the string a \n");
	scanf(" %[^\n]", a);
	printf("Before concatination:\n  string ch = %s \n string a = %s \n\n",ch,a);

	for(len1=0; ch[len1] ;len1++);
	for(len2=0; ch[len2] ;len2++);

	if(sizeof(ch)>len1+len2)
	{
		for(i=0,j=len1;a[i];j++,i++)
		{
			ch[j]=a[i];
		}
		ch[j]='\0';

		printf("After concatination:\n  string ch = %s \n string a = %s \n\n",ch,a);
	}

	else
		printf(" string capacity not sufficient for concatination\n\n");
}
