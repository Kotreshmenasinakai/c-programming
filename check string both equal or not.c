#include<stdio.h>
void main()
{
	char s[20],a[20];

	printf("Enter the string1 and string2 \n");
	scanf("%[^\n] %[^\n]", s, a);

	int len1,len2,i;
//	for(len1=0;s[len1];len1++);
//	for(len2=0;a[len2];len2++);

//	if(len1 == len2)
//	{
		for(i=0;s[i] && a[i];i++)  //s[i]
		{
			if(s[i] != a[i])
				break;
		}
		if(s[i] == a[i])
			printf("equal\n");
		else
			printf("not equal\n");
//	}
//	else
//		printf("not equal\n");
}
