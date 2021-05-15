
void display()
{
	struct node *ptr=head;
	while(ptr->next!=head)
	{
		cout<<ptr->data<<" -> ";
		ptr=ptr->next;
	}
	cout<<ptr->data;
	cout<<endl;
}
