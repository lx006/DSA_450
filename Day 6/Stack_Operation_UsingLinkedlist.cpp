#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};
struct Node *top;

void push(int num)
{
	struct Node *newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=num;
	newnode->next=top;
	top=newnode;
}

void pop()
{
	if(top==NULL)
	{
		cout<<"The stack is empty"<<endl;
	}
	else
	{
		struct Node *temp=top;
		int num = temp->data;
		cout<<"The element popped is "<<num<<endl;
		top=temp->next;
		free(temp);
	}
}

void peek()
{
	if(top==NULL)
	{
		cout<<"The stack is empty"<<endl;
	}
	else
	{
		int num=top->data;
		cout<<"The element at the top of the stack is "<<num<<endl;
	}
}

void display()
{
	if(top==NULL)
	{
		cout<<"The stack is empty"<<endl;
	}
	else
	{
		struct Node *temp=top;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
}

int main()
{
	int choice;
	do
	{
		cout<<"1.Create stack"<<endl<<"2.Push Element"<<endl<<"3.Pop Element"<<endl<<"4.Peek Element"<<endl<<"5.Diplay Stack"<<endl<<"6.Exit"<<endl;
		cin>>choice;
		if(choice==1)
		{
			int ele;
			cout<<"Enter element"<<endl;
			cin>>ele;
			push(ele);
		}
		else if(choice==2)
		{
			int ele;
			cout<<"Enter element"<<endl;
			cin>>ele;
			push(ele);
		}
		else if(choice==3)
		{
			pop();
		}
		else if(choice==4)
		{
			peek();
		}
		else if(choice==5)
		{
			display();
		}
		
	}while(choice!=6);
}
