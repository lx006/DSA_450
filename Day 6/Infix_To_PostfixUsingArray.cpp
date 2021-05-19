#include<iostream>
#include<string.h>
using namespace std;
const int N = 100;

class InfixToPostfix
{
	char infix[N],postfix[N];
	char stack[N];
	int top;
	
	public:
		InfixToPostfix(char in[N])
		{
			strcpy(infix,in);
			top = -1;
		}
		
		
		void push(char ch)
		{
			 if(top == N-1)
			 {
			 	 cout<<"stack is full"<<endl;
			 	 
			 }
			 else
			 {
			 	top++;
			 	stack[top] = ch;  //(
			 }
		}
		
		
		char pop()
		{
			char ch;
			
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
		
		void convert()
		{
			char ch;
			int i,j;
			
			i = 0;
			j = 0;
			while(infix[i] != '\0')   //(A+B)-C*D\0
			{
				ch = infix[i];
				
				//if the ch scanned is an operand
				if( (ch >='A' && ch <='Z') ||
				     (ch >= 'a' && ch<='z') )
				{
					postfix[j] = ch;
					j++;
				}
				else if(ch == '(')  //if the ch is ( 
				{
					push(ch);
				}
				else if(ch == '+' || ch == '-' || ch == '*' 
				        || ch == '/' || ch == '%' || ch == '^')
				{
					  
					 while(1)
					 {
					 	  if(top == -1)
					 	  {
					 	  		push(ch);
					 	  		break;	
						  }	
					 	  
						 char c = pop();
					 	  
					 	  if(c == '(')
					 	  {
					 	  		push(c);
					 	  		push(ch);
					 	  		break;
						  }
						  else if(isoperator(c) == 1)
						  {
						  		int p1 = getpriority(ch);
						  		int p2 = getpriority(c);
						  		
						  		if(p1 > p2)
						  		{
						  			push(c);
						  			push(ch);
						  			break;
								}
								else if(p2 >= p1)
								{
										postfix[j] = c;
										j++;
								}
						  		
						  }
					 	  
					 	  
					 }
					 
					 
				}
				else if(ch ==  ')')
				{
					char c ;
					while( (c = pop() )  != '(' )
					{
						postfix[j] = c;
						j++;
					}
				}
				
				i++;
			}
			
			
			while(top != -1)
			{
				char c = pop();
				postfix[j] = c;
				j++;
			}
			
			postfix[j] = '\0';
			
		}
		
		
		int isoperator(char ch)
		{
			if(ch == '+' || ch == '-' || ch == '*' 
				        || ch == '/' || ch == '%' || ch == '^')
			{
					return 1;	
			}
			
			return 0;
		}
		
		int getpriority(char op)
		{
			int p;
			
			switch(op)
			{
				case '^':
					p = 3;
					break;
				case '*':
				case '/':
				case '%':
					p = 2;
					break;
				case '+':
				case '-':
					p = 1;
					break;
				default:
					p = 0;
			}
			
			return p;
		}
		
		
		
		void showinfixexpression()
		{
				cout<<"infix expression is "<<infix<<endl;	
		}		 
		
		void showpostfixexpression()
		{
			cout<<"\npostfix expression is "<<postfix<<endl;
		}
		
		
};


int main()
{
	char in[N],inr[N];
	cout<<"Enter any infix expression "<<endl;
	cin>>in;  //(A+B)-C*D\0

	InfixToPostfix obj(in);
	obj.showinfixexpression();
	obj.convert();
	obj.showpostfixexpression();
	
	
	return 0;
}
