#include<stdio.h>
void main()
{
	char m[100], s[100];
	int i,j,k=0,n;
	printf("enter the main string\n");
	scanf("%[^\n]", m);
	printf("enter the sub string\n");
	scanf(" %[^\n]", s);

	for(i=0;m[i];i++)
	{
		if(m[i] == s[k])
		{
			j=i;
			while(s[k])
			{
				if(m[i] != s[k])
					break;
				k++;
				i++;
			}
			if(s[k] == 0)
			{       
				n=i;
				i=j;
				while(m[n])
				{ 
					m[j]=m[n];
					j++;
					n++;
				}
				m[j]=0;
				k=0;
			}
		}
	}
	printf("After : %s\n", m);
}
