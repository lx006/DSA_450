void display()
{
	struct node *end;
	struct node *temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" -> ";
		end=temp;
		temp=temp->next;
	}
	cout<<endl;
	while(end!=NULL)
	{
		cout<<end->data<<" -> ";
		end=end->prev;
	}
	cout<<endl;	
}
