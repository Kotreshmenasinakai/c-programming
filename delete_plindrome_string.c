#include<stdio.h>
void main()
{
	char m[100], s[100];
	int i,j,p,q,a,b;
	printf("enter the main string\n");
	scanf("%[^\n]", m);
//	printf("enter the sub string\n");
//	scanf(" %[^\n]", s);

	for(i=0;m[i];i++)
	{
		for(j=i; m[j] != ' ' && m[j] != 0; j++);

		for(char p=i,q=j-1 ; p<q; p++, q--)
			if(m[p] != m[q])
		             break;
                if(s[p] == s[q])
                        for(a=i; b=j+2; m[b] ; a++, b++)
                                m[a] = m[b];
                        m[a] = 0;
	}
	printf("After : %s\n", m);
}
