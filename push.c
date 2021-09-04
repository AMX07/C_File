#include<stdio.h>

#include<stdlib.h>
 
#define MAX 5 //Maximum number of elements that can be stored
 
int top=-1,stack[MAX];
void push();
void pop();
void display();
void peek();

 

/* Assignment: Stack Implementation Using Arrays

1) WAP to implement push operation.

2) WAP to implement pop operation.

3) WAP to create a stack that can hold letters.

4) Perform various operations like PUSH, POP, PEEK and TRAVERSE. Also check for Overflow and Underflow conditions. */




int main()
{
 int ch;
 while(1) //infinite loop, will end when choice will be 4
 {
    printf("\n  Menu ");
    printf("\n\n1.Push\n2.Pop\n3.display\n4.peek\n");
    printf("\n\nEnter your choice:");
    scanf("%d",&ch);


   switch(ch)
     {
        case 1: push();
        break;

        case 2: pop();
        break;
        
        case 3: display();
        break;

        case 4: peek();
        break;


        default: printf("\nWrong Choice!!");
        break;
     }
 }


}
 
void push()
{
  int val;

   if(top==MAX-1)
   {
     printf("\nStack is full, any more push would lead to stackoverflow");
   }
   else
   {
     printf("\nEnter element to push:");
     scanf("%d",&val);
     top=top+1;
     stack[top]=val;
   }
}
 
void pop()
{
    if(top==-1)
    {
        printf("\nStack is empty any more pop would lead to stackunderflow");
    }
        
    else
    {
        printf("\nDeleted element is %d",stack[top]);
         top=top-1;
    }
}


void display()
{
  int i;

    if(top==-1)
    {
        printf("\nStack is empty!!");
    }
   
    else
   {
     printf("\nStack is...\n");
     for(i=top;i>=0;--i)
      printf("%d\n",stack[i]);
   }
}

void peek()
{
  printf("\ntop is...\n");
     
      printf("%d\n",stack[top]);


}
 

