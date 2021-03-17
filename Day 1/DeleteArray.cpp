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
	int pos;
	cin>>pos;	//taking position for the element to be deleted
	for(int i=pos-1;i<size;i++)
	{
		Arr[i] = Arr[i+1]; //left shift the remaining element
	}
	for(int i=0;i<size-1;i++)
	{
		cout<<Arr[i]<<" ";	//print the array after deletion
	}
	
}
