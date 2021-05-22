#include<iostream>
using namespace std;
const int N=100;

int queue[N],front=-1,rear=-1;

void enqueue(int num)
{
	if(rear==N-1)
	{
		cout<<"Queue is full"<<endl;
	}
	else
	{
		rear=rear+1;
		queue[rear]=num;
		if(front==-1)
		{
			front=0;
		}
	}
	
}

void dequeue()
{
	if(front==-1||front==rear+1)
		cout<<"Queue is Empty"<<endl;
	else
	{
		int num=queue[front];
		queue[front]=0;
		front=front+1;
		cout<<num<<" is deleted"<<endl;
	}
}

void reverse()
{
	int i,j,temp;
	for(i=front,j=rear;i<j;i++,j--)
	{
		temp = queue[i];
		queue[i] = queue[j];
		queue[j] = temp;
	}
}

void display()
{
	if(front==-1)
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<queue[i]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int choice;
	do
	{
		cout<<"1.Enqueue "<<endl<<"2.Dequeue"<<endl<<"3.Reverse Queue"<<endl<<"4.Display"<<endl;
		cin>>choice;
		if(choice==1)
		{
			int ele;
			cout<<"Enter element to be inserted"<<endl;
			cin>>ele;
			enqueue(ele);
		}
		else if(choice==2)
		{
			dequeue();
		}
		else if(choice==3)
		{
			reverse();
		}
		else if(choice==4)
		{
			display();
		}
	}while(choice!=5);
}
