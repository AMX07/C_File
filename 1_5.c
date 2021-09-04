#include <stdio.h>
#include <stdlib.h>

//WAP to check whether the character is an alphabet or not

int main()
{
//taking the input
printf("enter char\n");
char inputChar;
scanf("%c/n",&inputChar);
//coverting to char to int for easily checking if its an alphabet or not
// using ascii, 65-90,97-122

if ((inputChar >=65 && inputChar <=90) || (inputChar >=97 && inputChar <=122))
{
    
printf("character '%c' is an alphabet\n",inputChar);

}

else
{
printf("character '%c' is not an alphabet\n",inputChar);

}






}