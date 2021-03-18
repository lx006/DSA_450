#include<iostream>
using namespace std;

main()
{
	int size;
	cin>>size;	//taking size of array
	int Arr[size];	//declaration of array
	for(int i=0;i<size;i++)
	{
		cin>>Arr[i];	//taking elements of array
	}
	int element,pos;
	cin>>element>>pos;	//taking element and pos to be updated
	Arr[pos-1] = element;	//setting the value at the defined position
	for(int i=0;i<size;i++)
	{
		cout<<Arr[i]<<" ";	//printing elements of array
	}
	cout<<endl;
}
