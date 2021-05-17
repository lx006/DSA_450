void insertAtEnd(int num)
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
