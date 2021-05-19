#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
const int N=100;

class EvaluPostfix
{
	char Exp[N];
	int stack[N];
	int top;
	
	public:
		EvaluPostfix(char ex[N])
		{
			strcpy(Exp,ex);
			top = -1;
		}
		
		void push(int ch)
		{
			 if(top == N-1)
			 {
			 	 cout<<"stack is full"<<endl;
			 	 
			 }
			 else
			 {
			 	top++;
			 	stack[top] = ch;  
			 }
		}
		
		
		int pop()
		{
			int ch;
			
			if(top == -1)
			{
				cout<<"stack is empty"<<endl;
			}
			else
			{
				ch = stack[top];
				top--;
			}
			
			return ch;
		}
		
		int calculate()
		{
			int i=0,ans;
			while(Exp[i]!='\0')
			{
				char ch = Exp[i];
				if(ch>='0'&& ch<='9')
				{
					int num = ch-48;
					push(num);
				}
				else if(ch == '+')
				{
					int a = pop();
					int b = pop();
					ans = b + a;
					push(ans);
				}
				else if(ch == '-')
				{
					int a = pop();
					int b = pop();	
					ans = b - a;
					push(ans);
				}
				else if(ch == '*')
				{
					int a = pop();
					int b = pop();
					ans = b * a;
					push(ans);
				}
				else if(ch == '/' )
				{
					int a = pop();
					int b = pop();
					ans = b / a;
					push(ans);
				
				}
				else if(ch == '%' )
				{
					int a = pop();
					int b = pop();
					ans = b % a;
					push(ans);
				}
				else if(ch == '^' )
				{
					int a = pop();
					int b = pop();
					ans = pow(b,a);
					push(ans);	
				}
				i++;
			}
			int value = pop();
			return value;
		}
};

int main()
{
	char Exp[N];
	int Ans=0;
	cout<<"Enter your postfix expression"<<endl;
	cin>>Exp;
	EvaluPostfix obj(Exp);
	Ans = obj.calculate();
	cout<<Ans;
	
}
