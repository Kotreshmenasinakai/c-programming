#include<stdio.h>
void main()
{
char m[100], s[100];
int i,k=0;
printf("enter the main string\n");
scanf("%[^\n]", m);
printf("enter the sub string\n");
scanf(" %[^\n]", s);

for(i=0;m[i];i++)
{
  if(m[i] == s[k])
      break;
}

while(s[k])
{
 if(m[i] != s[k])
   break;
k++;
i++;
}

if(s[k] == 0)
  printf("Yes\n");
else
  printf("No\n");
}
