void insertAtBeg(int num) //function to insert element at beginning
{
	struct node *temp; //create a variable of struct node type
	if(head==NULL) //if linkedlist is empty
	{
		head = (struct node *)malloc(sizeof(struct node)); //allocate a memory for a node
		head->data=num; //the head which points to data will store the new number
		head->next=NULL; //the head which point to the address will store null as single value is added
	}
	else
	{
		temp=head;  //if linkedlist is not empty the address of head will be stored in temp
		head=(struct node *)malloc(sizeof(struct node));  //allocate a memory for a node
		head->data=num;  //the head which points to data will store the new number
		head->next=temp; //the head which points to address will store the address of temp 
	}
}
