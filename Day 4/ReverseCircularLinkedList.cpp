void reverse()
{
	struct node *current=head, *next=NULL, *prev=NULL; //head 2,3,4
	do
	{
		next = current->next;
		current->next=prev;
		prev=current;
		current=next;
	}while(current!=head);
	head->next=prev;
	head = prev;
}
