int deleteAtEnd()
{
	struct node *temp, *temp1;
	int num;
	if(head==NULL)
	{
		return 999;
	}
	else if(head->next==NULL)
	{
		num=head->data;
		free(head);
		head=NULL;
		return num;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp1=temp;
			temp=temp->next;
		}
		num=temp->data;
		temp1->next=NULL;
		free(temp);
		return num;
	}
}
