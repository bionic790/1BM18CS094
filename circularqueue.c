#include<stdio.h>
#include<stdlib.h>


int rear=-1,front =0,a[3];

void enqueue(int data)
{
if(rear == *a)
{
printf("overflow");
}
else
{
rear=(rear+1)%3;
a[rear]=data;
}
}
void dequeue()
{
if(front==rear || front== -1)
{
printf("underflow");
}
else
{
front=(front+1)%3;
}
}
void print()
{
int i;
printf("queue:");
for(i=front;i<=rear;i++)
{
printf("%d\t",a[i]);
}
}
int main()
{

int i,choice,data;
do
	{
		printf("1.enqueue\n");
		printf("2.dequeue\n");
		printf("3.print\n");
		printf("4.Quit\n");

		printf("Enter your choice : ");
		scanf("%d",&choice);


switch (choice)
{
case 1:
       printf("Input the element for insertion in queue : ");
				scanf("%d", &data);
       enqueue(data);
       
        break;
case 2:  
       dequeue();
       
       break;
case 3:  
       print();
      
       break;
case 4: 
       exit(0);
       break;
default: 
        printf("wrong choice\t");
}
}while(choice!=4);
return 0;
}
