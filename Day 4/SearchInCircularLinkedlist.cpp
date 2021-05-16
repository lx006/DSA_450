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
		do
		{
			if(temp->data==num)
			{
				return true;
			}
			temp = temp->next;
		}while(temp!=head);
		return false;
	}
}
