#include<iostream>
#include<stdlib.h>
using namespace std;

struct node //structure to define a node
{
	int data;
	struct node *next;
};
struct node *head;

void create(int Num) 
{
	struct node *temp; 
	if(head==NULL) 
	{
		head = (struct node *)malloc(sizeof(struct node)); 
		head->data=Num; 
		head->next=head; 
	}
	else
	{
		temp=head; 
		while(temp->next!=head)
		{
			temp=temp->next; 
		}
		temp->next=(struct node *)malloc(sizeof(struct node)); 
		temp->next->next=head; 
		temp->next->data=Num; 
	}
}

void insertAtBeg(int num) 
{
	struct node *temp,*temp1; 
	if(head==NULL) 
	{
		head = (struct node *)malloc(sizeof(struct node)); 
		head->data=num; 
		head->next=head; 
	}
	else
	{
		temp=head;
		temp1= (struct node *)malloc(sizeof(struct node)); 
		temp1->data=num;
		temp1->next=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=temp1;
		head=temp1;
	}
}

void insertAtEnd(int num)
{
	struct node *temp;
	if(head==NULL)
	{
		head = (struct node *)malloc(sizeof(struct node));
		head->data=num;
		head->next=head;
	}
	else
	{
		temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next = (struct node *)malloc(sizeof(struct node));
		temp->next->data=num;
		temp->next->next=head;
	}	
}

void insertAtPos(int pos,int num)
{
	struct node *temp,*temp1;
	if(head==NULL)
	{
		cout<<"Linked list is empty"<<endl;
	}
	else
	{
		temp=head;
		if(pos==1)
		{
			insertAtBeg(num);
			return;
			
		} 
		for(int i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		temp1=temp->next;
		temp->next = (struct node *)malloc(sizeof(struct node));
		temp->next->data=num;
		temp->next->next=temp1;
	}	
}

int deleteAtBeg()
{
	struct node *temp;
	int num;
	if(head==NULL)
	{
		return 999;
	}
	else if(head->next==head)
	{
		num=head->data;
		free(head);
		head=NULL;
		return num;		
	}
	else
	{
		temp=head;
		head=temp->next;
		num=temp->data;
		free(temp);
		return num;
	}
}

int deleteAtMid(int num)
{
	struct node *temp, *temp1;
	int delnum;
	if(head==NULL)
	{
		return 999;
	}
	else if(head->data==num)
	{
		temp = head;
		head = temp->next;
		delnum = temp->data;
		free(temp);
		return delnum;
	}
	else
	{
		temp = head;
		while(temp->next->data!=num)
		{
			temp = temp->next;
			if(temp==head)
			{
				return 888;
			}
		}
		delnum=temp->next->data;
		temp1=temp->next->next;
		free(temp->next);
		temp->next = temp1;
		return delnum;
	}
}

int deleteAtEnd()
{
	struct node *temp, *temp1;
	int num;
	if(head==NULL)
	{
		return 999;
	}
	else if(head->next==head)
	{
		num=head->data;
		free(head);
		head=NULL;
		return num;
	}
	else
	{
		temp=head;
		while(temp->next!=head)
		{
			temp1=temp;
			temp=temp->next;
		}
		num=temp->data;
		temp1->next=head;
		free(temp);
		return num;
	}
}

bool search(int num)
{
	struct node *temp=head;
	if(head==NULL)
	{
		cout<<"List is empty"<<endl;
		return false;
	}
	else
	{
		do
		{
			if(temp->data==num)
			{
				return true;
			}
			temp = temp->next;
		}while(temp!=head);
		return false;
	}
}

void reverse()
{
	struct node *current=head, *next=NULL, *prev=NULL; //head 2,3,4
	do
	{
		next = current->next;
		current->next=prev;
		prev=current;
		current=next;
	}while(current!=head);
	head->next=prev;
	head = prev;
}

void display()
{
	struct node *ptr=head;
	while(ptr->next!=head)
	{
		cout<<ptr->data<<" -> ";
		ptr=ptr->next;
	}
	cout<<ptr->data;
	cout<<endl;
}

int main()
{
	int choice;
	do
	{
		cout<<"1.Create Circular Linked List"<<endl<<"2.Insert Options"<<endl<<"3.Delete Options"<<endl
		<<"4.Reverse Option"<<endl<<"5.Search Option"<<endl<<"6.Display Option"<<endl<<"7.Exit"<<endl;
		cin>>choice;
		if(choice==1)
		{
			int element;
			cout<<"Enter element"<<endl;
			cin>>element;
			create(element);
		}
		else if(choice==2)
		{
			int inschoice;
			do
			{
				cout<<"1.Insert at Beginning"<<endl<<"2.Insert at End"<<endl<<"3.Insert at Position"<<endl;
				cin>>inschoice;
				if(inschoice==1)
				{
					int element;
					cout<<"Enter element to be inserted"<<endl;
					cin>>element;
					insertAtBeg(element);
				}
				else if(inschoice==2)
				{
					int element;
					cout<<"Enter element to be inserted"<<endl;
					cin>>element;
					insertAtEnd(element);
				}
				else if(inschoice==3)
				{
					int element,pos;
					cout<<"Enter element to be inserted"<<endl;
					cin>>element;
					cout<<"Enter position"<<endl;
					cin>>pos;
					insertAtPos(pos,element);
				}
			}while(inschoice!=4);
		}
		else if(choice==3)
		{
			int inschoice;
			do
			{
				cout<<"1.Insert at Beginning"<<endl<<"2.Insert at End"<<endl<<"3.Insert at Position"<<endl;
				cin>>inschoice;
				if(inschoice==1)
				{
					int element;
					cout<<"Enter element to be deleted"<<endl;
					cin>>element;
					int num=deleteAtBeg();
					cout<<num<<" is deleted"<<endl;
				}
				else if(inschoice==2)
				{
					int element;
					cout<<"Enter element to be deleted"<<endl;
					cin>>element;
					int num=deleteAtEnd();
					cout<<num<<" is deleted"<<endl;
				}
				else if(inschoice==3)
				{
					int element,pos;
					cout<<"Enter element to be deleted"<<endl;
					cin>>element;
					int num=deleteAtMid(element);
					cout<<num<<" is deleted"<<endl;
				}
			}while(inschoice!=4);
		}
		else if(choice==4)
		{
			reverse();
		}
		else if(choice==5)
		{
			int element;
			cout<<"Enter element to be searched"<<endl;
			cin>>element;
			bool var = search(element);
			if(var==1)
			{
				cout<<"Element found"<<endl;
			}
			else
			{
				cout<<"Element not found"<<endl;
			}
			
		}
		else if(choice==6)
		{
			display();
		}
	}while(choice!=7);

}
