#include <stdio.h>


char stack[10];
int  n = 10, top = -1;

void
push (char val)
{
  
if (top >= n - 1)
    
printf("Stack Overflow\n");
  
  else
    {
      
top++;
      
stack[top] = val;
    
}

}


void
pop ()
{
  
if (top <= -1)
    
printf("Stack Underflow\n" );
  
  else
    {
      
printf("The popped element is %c \n ", stack[top]);
      
top--;
    
}

}

void peek()
{
if(top<=-1)

printf("Stack Underflow\n");

  else
  {
    printf("Element at the top of the stack is %c\n ",stack[top]);  
  }
}

void
traverse ()
{
  
if (top >= 0)
    {
      
printf("Stack elements are:");
      
for (int i = top; i >= 0; i--)
	
printf(" %c",stack[i]);
      
printf("\n");
    
}
  else
    
printf("Stack is empty\n");

}


int
main ()
{
  
int ch; 
 char val;
printf("1) Push in stack\n");

printf("2) Pop from stack\n");
  
printf("3) Peek stack\n");

printf("4) Traverse stack\n");
  
printf("5) Exit\n");
  
  do
    {
      
printf("\nEnter choice: ");
      
scanf("%d",&ch);
      
switch (ch)
	{
	
case 1:
	  {
	    
printf("Enter value to be pushed:\n");
	    
scanf("%c",&val);
	    
push (val);
	    
break;
	  
}
	
case 2:
	  {
	    
pop ();
	    
break;
	  
}
	
case 3:
	  {
	    
peek ();
	    
break;
	  
}

case 4:
	  {
	    
traverse ();
	    
break;
	  
}
	
case 5:
	  {
	    
printf("Exit\n");
	    
break;
	  
}
	
default:
	  {
	    
printf("Invalid Choice\n");
	  
}
	
}
    
}
  while (ch != 5);
  
return 0;

}