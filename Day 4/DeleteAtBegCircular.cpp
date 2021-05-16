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
