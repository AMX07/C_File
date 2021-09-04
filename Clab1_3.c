#include <stdio.h>
#include <stdlib.h>

// to check whether the given char is a vowel or consonant

int main()
{

char inputChar;
// taking input
printf("enter the Character\n");
scanf("%c",&inputChar);
// checking if its a vowel 
if (inputChar== 'a'||inputChar=='e'||inputChar=='i'||inputChar=='o'|| inputChar== 'A' || inputChar== 'E' || inputChar== 'I' || inputChar== 'O')
{
     printf("\n%c is a vowel\n",inputChar);    
}

else
{
    printf("\n%c is a consonant\n",inputChar);  
}







}
