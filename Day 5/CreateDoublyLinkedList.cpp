struct node //structure to define a node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head;

void create(int num)
{
	struct node *temp,*temp1;
	if(head==NULL)
	{
		head = (struct node *)malloc(sizeof(struct node));
		head->data=num;
		head->next=NULL;
		head->prev=NULL;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next= (struct node *)malloc(sizeof(struct node));
		temp->next->prev=temp;
		temp->next->data=num;
		temp->next->next=NULL;	
	}
}
