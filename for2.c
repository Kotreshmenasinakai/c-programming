// this type of loop also valid and these are the not shown error, whatever the condition that will be the follow but we look carefully towards the pre inc or post inc

// this case post inc is there 1st it will asign 0 to the condition part then i will be incremented so loop dosn't execute in this condition bcz cond is zero.


#include<stdio.h>
void main()
{
 int i =0;

for (i<5 ; i++ ; i =2)

   printf("%d\n",i);

}
