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
	cin>>pos;	//taking position for the element insertion
	int element;
	cin>>element;	//the element to be inserted
	for(int i=size;i>=pos-1;i--)
	{
		Arr[i+1] = Arr[i];	//right shift the remaining element
	}
	Arr[pos-1] = element;	//insert the element to the desired position
	for(int i=0;i<=size;i++)
	{
		cout<<Arr[i]<<" ";	//printing elements of array
	}
}
