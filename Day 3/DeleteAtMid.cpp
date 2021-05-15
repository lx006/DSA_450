int deleteAtMid(int num)
{
	struct node *temp, *temp1;
	int delnum;
	if(head==NULL)
	{
		return 999;
	}
	else if(head->data==num)
	{
		temp = head;
		head = temp->next;
		delnum = temp->data;
		free(temp);
		return delnum;
	}
	else
	{
		temp = head;
		while(temp->next->data!=num)
		{
			temp = temp->next;
			if(temp==NULL)
			{
				return 888;
			}
		}
		delnum=temp->next->data;
		temp1=temp->next->next;
		free(temp->next);
		temp->next = temp1;
		return delnum;
	}
}
