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
