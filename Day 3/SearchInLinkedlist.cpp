bool search(int num)
{
	struct node *temp=head;
	if(head==NULL)
	{
		cout<<"List is empty"<<endl;
		return false;
	}
	else
	{
		while(temp!=NULL)
		{
			if(temp->data==num)
			{
				return true;
			}
			temp = temp->next;
		}
		return false;
	}
}
