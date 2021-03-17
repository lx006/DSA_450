#include<iostream>
using namespace std;

main()
{
	int size;  //size of array
	cin>>size;
	int Arr[size];  //array declaration
	for(int i=0;i<size;i++)
	{
		cin>>Arr[i];	//taking input
	}
	int element;
	cin>>element;	//element to be searched
	int pos;
	for(int i=0;i<size;i++)
	{
		if(Arr[i]==element)	//search for element one by one
		{
			pos = i+1;	//if found set it's pos and break the loop
			break;
		}
		else
		{
			pos = 0; //if not found return 0 or set 0
		}	
	}
	if(pos>0)
	{
		cout<<"Element found at position "<<pos<<endl; //check using flag variable
	}
	else
	{
		cout<<"Element not found"<<endl;
	}
	
}
