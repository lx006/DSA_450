void insertAtPos(int pos,int num)
{
	struct node *temp,*temp1;
	if(head==NULL)
	{
		cout<<"Linked list is empty"<<endl;
	}
	else
	{
		temp=head;
		if(pos==1)
		{
			head= (struct node *)malloc(sizeof(struct node));
			head->next=temp;
			head->data=num;
			return;
			
		} 
		for(int i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		temp1=temp->next;
		temp->next= (struct node *)malloc(sizeof(struct node));
		temp->next->data=num;
		temp->next->next=temp1;
	}
	
}
