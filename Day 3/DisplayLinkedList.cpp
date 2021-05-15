void display()
{
	struct node *ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" -> ";
		ptr=ptr->next;
	}
	cout<<endl;
}
