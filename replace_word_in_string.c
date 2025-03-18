#include<stdio.h>
void main()
{
	char s[100], r1[20], r2[20];

	printf("enter the string : ");
	scanf("%[^\n]", s);
	printf("enter which word you want to replace: ");
	scanf("%s",r1);
        printf("enter form what word you replace '<%s>' : ", r1);
        scanf("%s",r2);
        int i,j,a,b,n,p,c=0,dif;
	int len_r1, len_r2, len_s;
	for(len_r1=0; r1[len_r1] ; len_r1++);
	for(len_r2=0; r2[len_r2] ; len_r2++);
	for(len_s=0; s[len_s]; len_s++);
        
       
	for(i=0;s[i];i++)
	{
		for(j=i; s[j] != 0 && s[j] != ' ' ; j++)  
			c++;
		if(c == len_r1)
		{
			for(a=0, b=i; r1[a] ; a++, b++)
				if(r1[a] != s[b])
					break;       

			if(r1[a] == 0 )
	        	{
			 	if(len_r2>len_r1)
				{
				        dif= len_r2-len_r1;
					for(int m=0; m<dif ; m++,len_s++)
						for( a=i, b=len_s ; b>a ; b--)
							s[b+1] = s[b];
                                         
					for(n=0,p=i; r2[n] ; n++,p++)
						s[p] = r2[n];
				}
                                else if( len_r2 < len_r1)
                                {
                                        dif= len_r1-len_r2;
                                        for(n=0, p=i; r2[n] ; p++, n++)
                                                 s[p] = r2[n];
                                        
                                       for(int m=0; m<dif; m++)
                                                for( a=p; s[a] ; a++)
                                                     s[a] = s[a+1];
                                } 
                                else
                                {
                                  for(n=0, p=i; r2[n] ; p++, n++)
                                         s[p] = r2[n];
                                } 
                          j=i;                          
			}
		}
         i=j;
         c=0;
	}
        printf("After replaceing : %s \n",s);
}
