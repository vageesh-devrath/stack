#include<stdio.h>
#include<stdlib.h>
#define size 20
int stack[size],top=-1;
int push(int x)
{
	if(top==size-1)
	{
		printf("Stack Overflow");
	}
	else
	{
		top++;
		stack[top]=x;
	}
}
int pop()
{
	if(top==-1)
	{
		printf("Stack Underflow");
	}
	else
	{
		stack[top]=0;
		top--;
	}
}
void display()
{
	int i;
	for(i=0;i<top;i++)
	{
		printf("The Resultant stack is:\n%d",stack[i]);
	}
	printf("\n");
}

