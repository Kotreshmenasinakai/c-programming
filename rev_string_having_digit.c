#include<stdio.h>
void main()
{
	char s[100];
	int i, j, c=0;

	printf("enter the string\n");
	scanf("%[^\n]", s);
	for(i=0;s[i];i++) 
	{ 
		for(j=i;s[j]!=' '&& s[j]!='\0';j++) 
		
			if(s[j]>=48 && s[j] <= 57)
				c++;
		
		if(c!=0)
		 
			for(int m=i,n=j-1; m<n; m++, n--) 
			{ 
				char t=s[m]; 
				s[m] =s[n]; 
				s[n]=t; 
			}
		 
		i=j; 
		c=0; 
	}
	printf("%s\n", s); 
} 
