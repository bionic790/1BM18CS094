#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 10
int top=-1;
int stack[MAX_SIZE];
void push(int X)
{
if (top==MAX_SIZE-1)
  {
printf("Error: stack is full");
  }
  else
   {
   top=top+1;
   stack[top]=X;
   }
}
   void pop()
     {
      if( top==-1)
       {
       printf("Error:stack is empty\n");
       }

       else
       {
	top=top-1;
       }
     }
   void print()
       {
       int i;
	 if(top==-1)
	  {
	    printf("stack is empty");
	  }
	else
	 {
	 printf("stack:\n");
	 for ( i=0;i<=top;i++)
	    {
	      printf("%d\n",stack[i]);
	    }
	 }
       }
   void main()





