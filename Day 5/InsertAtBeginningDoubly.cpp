void insertAtBeg(int num)
{
	struct node *temp;
	if(head==NULL)
	{
		head = (struct node *)malloc(sizeof(struct node));
		head->data=num;
		head->next=NULL;
		head->prev=NULL;
	}
	else
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->next=head;
		temp->data=num;
		temp->prev=NULL;
		head->prev=temp;
		head=temp;
	}
}
