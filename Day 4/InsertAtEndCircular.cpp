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
