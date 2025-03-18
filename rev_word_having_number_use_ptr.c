#include<stdio.h>
void main()
{
	char s[100],*p,*q;
	int i, j, c=0;
        
        p=q=s;
	printf("enter the string\n");
	scanf("%[^\n]", s);
	while (*p)
	{ 
		while(*q!=' '&& *q!='\0') 
                       {
			if(s[j]>=48 && s[j] <= 57)
				c++;
                         q++;
                       }
		if(c!=0)
			for(char *m=p,*n=q-1; m<n; m++, n--) 
			{
				char t=*m; 
				*m =*n; 
				*n=t; 
			}
		p=q;
                q++; 
		c=0;
         p++;
	}
	printf("%s\n", s); 
} 
