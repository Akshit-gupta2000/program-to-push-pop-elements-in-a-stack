#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#define MAX 10

int top=-1,stack[MAX];
void push();
void pop();
void display();

int main()
{
	int ch;
	while(1)	
	{
		printf("\nStack Menu:-");
		printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
		printf("\n\nEnter your option:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
					break;

			case 2: pop();
					break;

			case 3: display();
					break;

			case 4: exit(0);

			default: printf("\nInvalid !!");
		}
	}
}

void push()
{
	int val;
	if(top==MAX-1)
	{
		printf("\nStack is full!!");
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
		printf("\nStack is empty!");
	}
	else
	{
		printf("\nDeleted element is: %d",stack[top]);
		top=top-1;
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("\nStack is empty!");
	}
	else
	{
		printf("\nthe Stack is:\n");
		for(i=top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
} 
