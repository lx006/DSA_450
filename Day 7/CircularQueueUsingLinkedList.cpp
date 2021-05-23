#include<iostream>
using namespace std;
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int d) //Insert elements in Queue
{
	struct node* new_node;
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = d;
	new_node->next = NULL;
	if((rear==NULL)&&(front==NULL))
	{
		front = rear = new_node;
		rear->next = front;
	}
	else
	{
		rear->next = new_node;
		rear = new_node;
		new_node->next = front;
	}
} 
void dequeue() // Delete an element frontrom Queue
{
	struct node* temp;
	temp = front;
	if((front==NULL)&&(rear==NULL))
		cout<<"Queue is empty"<<endl;
	else if(front == rear){
		front = rear = NULL;
		free(temp);
	}
	else{
		front = front->next;
		rear->next = front;
		free(temp);
	}
	
	
}
void print(){ // Print the elements of Queue
	struct node* temp;
	temp = front;
	if((front==NULL)&&(rear==NULL))
		cout<<"Queue is empty"<<endl;
	else{
		do{
			cout<<temp->data<<" ";
			temp = temp->next;
		}while(temp != front);
	}
	cout<<endl;
}
int main()
{
	int opt,n,i,data;
	printf("Enter Your Choice:-");
	do{
		printf("\n\n1 for Insert the Data in Queue\n2 for show the Data in Queue \n3 for Delete the data from the Queue\n0 for Exit\n");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				printf("\nEnter the number of data");
				scanf("%d",&n);
				printf("\nEnter your data");
				i=0;
				while(i<n){
					scanf("%d",&data);
					enqueue(data);
					i++;
				}
				break;
			case 2:
				print();
				break;
			case 3:
				 dequeue();
				break;
			case 0:
				break;
			default:
				printf("\nIncorrect Choice");
			
		}
	}while(opt!=0);
return 0;
}
