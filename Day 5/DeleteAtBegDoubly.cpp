int deleteAtBeg()
{
	struct node *temp;
	int num;
	if(head==NULL)
	{
		return 999;
	}
	else
	{
		temp=head;
		head=temp->next;
		head->prev=NULL;
		num=temp->data;
		free(temp);
		return num;
	}
}
