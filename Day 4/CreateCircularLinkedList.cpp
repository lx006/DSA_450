#include<iostream>
#include<stdlib.h>
using namespace std;

struct node //structure to define a node
{
	int data;
	struct node *next;
};
struct node *head;

void create(int Num) //function to create a linked list
{
	struct node *temp; //create a variable of struct node type
	if(head==NULL) //if linkedlist is empty
	{
		head = (struct node *)malloc(sizeof(struct node)); //allocate a memory for a node
		head->data=Num; //the head which points to data will store the new number
		head->next=head; //the head which point to the address will store the address of first node which is again the head value 
	}
	else
	{
		temp=head; //if linkedlist is not empty the address of head will be stored in temp
		while(temp->next!=head)
		{
			temp=temp->next; //iterate untill we find the same head address node
		}
		temp->next=(struct node *)malloc(sizeof(struct node)); //the node which contains head address will get the new address of new node
		temp->next->next=head; //the new node address block will store head as it is last node
		temp->next->data=Num; //the new node data will get the new number
	}
}
