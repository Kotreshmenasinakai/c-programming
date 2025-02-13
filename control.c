/* control statement are use in the c for the controlling the execution based on the some operation result. 
// control statements are two types:1) ittretive   ---> for , while, dowhile
				    2) non ittretive ---> a) conditional ,                                                            b) non conditional
a) conditional ---> if, ifelse, if else ladder, switch statements;
b) non-conditional ---> goto , break, return, continue;
 
***************************************************************************
1. if : if is a conditional non ittretive control statement.

 syntax:
1. if ( exp / condition/ variable)    2. if (exp / conditional / variable)
   {                                     statement 1..
     statement 1 ........                statement 2..
     statement 2 ........         
     statement 3 ........             3. if (exp/condition/variable);
   }                                      statement 1...
					  statement 2...
                                          ....
 In a 3rd syntax called as dummy systax in wich if either the condition will be true or condition will be fals the statemetnt below the condition that will be executed. and "expression within a condition will be solved.."
*/

// program to findout the whether given input charecter is lowercase or not.

#include<stdio.h>
int main()

{
char ch;
printf("enter the charecter...\n");
scanf("%c",&ch);

if (ch>=97 && ch<=97+26)
  printf("it is a lowercase\n");

}
