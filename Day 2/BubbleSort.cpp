#include<iostream>
using namespace std;

main()
{
	int size;
	cin>>size;		//taking the size of array
	int Arr[size];	//array declaration
	for(int i=0;i<size;i++)
	{
		cin>>Arr[i];	//taking input of array
	}
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(Arr[j]<Arr[i])	//if the elements are not in ascending swap their positions
			{
				int temp = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = temp;	
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<Arr[i]<<" ";	//printing sorted array
	}
		
}
