#include<stdio.h>
void main()
{
	char s[10] , ch;
	int i,len,j,k;

	printf("enter the string\n");
	scanf("%[^\n]",s);

	for(len=0;s[len];len++);

        for(i=0;s[i];i++)
          {
            for(j=i+1;s[j];j++)
              {
                if(s[i] == s[j]) 
                  {
                    for(k=j;s[k];k++)
                       s[k] = s[k+1];   
                   j--;
                  }
              } 
             
          }

        printf(" After deleting the duplicater char in string : %s \n",s);


}
