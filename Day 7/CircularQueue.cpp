#include<iostream>
using namespace std;
const int N=5;

int cirQueue[N],front=-1,rear=-1;

bool isFull()
{
	if((front==rear+1)||(front==0 && rear==N-1))
	{
		return true;	
	}
	return false;
}

bool isEmpty()
{
	if(front==-1)
	{
		return true;
	}
	return false;
}

void enqueue(int num)
{
	if(isFull())
	{
		cout<<"Overflow condition"<<endl;
		return;
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		rear=(rear+1)%N;
		cirQueue[rear]=num;

	}
}

void dequeue()
{
	int num;
	if(isEmpty())
	{
		cout<<"Underflow condition"<<endl;
		return;
	}
	else
	{
		num=cirQueue[front];
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front=(front+1)%N;
		}
	}
	cout<<num<<" is deleted"<<endl;
}

void display()
{
	if(isEmpty())
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		int i=front;
		do
		{
			cout<<cirQueue[i]<<" ";
			i=(i+1)%N;
			
		}while(i!=rear);
		cout<<cirQueue[i]<<endl;
	}
}

int main()
{
	int choice;
	do
	{
		cout<<"1.Enqueue "<<endl<<"2.Dequeue"<<endl<<"3.Display"<<endl;
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
			display();
		}
	}while(choice!=4);
}
