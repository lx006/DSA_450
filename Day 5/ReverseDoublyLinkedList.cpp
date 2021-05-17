void reverse()
{
	struct node *current=head, *temp;
	do
	{
		temp=current->prev;
		current->prev=current->next;
		current->next=temp;
		current=current->prev;
	}while(current!=NULL);
	if(temp!=NULL)
	{
		head = temp->prev;	
	}
}
