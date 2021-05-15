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
		num=temp->data;
		free(temp);
		return num;
	}
}
