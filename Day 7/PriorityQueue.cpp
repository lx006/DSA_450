#include<iostream>
using namespace std;
const int N=100;

int priQueue[N],front=-1,rear=-1;

void check(int num)
{
	int i,j;
	for(i=0;i<=rear;i++)
	{
		if(num<=priQueue[i])
		{
			for(j=rear+1;j>i;j--)
			{
				priQueue[j]=priQueue[j-1];
			}
			priQueue[i]=num;
			return;
		}
	}
	priQueue[i]=num;
}

void enqueue(int num)
{
	if(rear==N-1)
	{
		cout<<"Queue is full"<<endl;
		return;
	}
	else if(front==-1 && rear==-1)
	{
		front++;
		rear++;
		priQueue[rear]=num;
		return;
	}
	else
	{
		check(num);
	}
	rear++;
}



void dequeue()
{
	if(front==-1)
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		if(front==rear)
			front = rear = -1;
		else
			front++;
	}
}

void display()
{
	for(int i=front;i<=rear;i++)
	{
		cout<<priQueue[i]<<" ";
	}
	cout<<endl;
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
