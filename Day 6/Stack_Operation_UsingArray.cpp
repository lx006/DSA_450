#include<iostream>
using namespace std;
const int N=100;
int stack[N];

class StackOperation
{
	int top=-1;
	
	public:
		void push(int num)
		{
			if(top==N-1)
			{
				cout<<"Stack overflow"<<endl;
			}
			else
			{
				top++;
				stack[top]=num;
			}
		}
		
		void pop()
		{
			if(top==-1)
			{
				cout<<"Stack underflow"<<endl;
			}
			else
			{
				int num=stack[top];
				cout<<"The element removed is "<<num<<endl;
				top--;
			}
		}
		
		void peek()
		{
			int num=stack[top];
			cout<<"The element at top is "<<num<<endl;
		}	
		
		void display()
		{
			int temp=top;
			while(temp!=-1)
			{
				cout<<stack[temp]<<" ";
				temp--;
			}
			cout<<endl;
		}
};

int main()
{
	StackOperation obj;
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
			obj.push(ele);
		}
		else if(choice==2)
		{
			int ele;
			cout<<"Enter element"<<endl;
			cin>>ele;
			obj.push(ele);
		}
		else if(choice==3)
		{
			obj.pop();
		}
		else if(choice==4)
		{
			obj.peek();
		}
		else if(choice==5)
		{
			obj.display();
		}
	}while(choice!=6);
}
