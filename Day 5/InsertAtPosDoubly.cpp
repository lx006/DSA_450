void insertAtPos(int pos,int num)
{
	struct node *temp,*temp1,*newnode;
	if(head==NULL)
	{
		cout<<"Linked list is empty"<<endl;
	}
	else
	{
		temp=head;
		if(pos==1)
		{
			insertAtBeg(num);
			return;
		} 
		for(int i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		temp1=temp->next;
		temp->next= (struct node *)malloc(sizeof(struct node));
		temp->next->prev=temp;
		temp->next->data=num;
		temp->next->next=temp1;
		temp->next->next->prev=temp->next;
		
		//Alternative method
		/*temp1=temp->next;
		newnode=(struct node *)malloc(sizeof(struct node));
		temp->next=newnode;
		newnode->data=num;
		newnode->next=temp1;
		newnode->prev=temp;
		newnode->next->prev=newnode; */
	}
}
