void reverse()
{
	struct node *current=head, *next=NULL, *prev=NULL;
	while(current!=NULL)
	{
		next = current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head = prev;
}
