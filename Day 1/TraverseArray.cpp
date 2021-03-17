#include<iostream>
using namespace std;

main()
{
	int size; //size of array
	cin>>size; 
	int Arr[size]; //array declaration
	for(int i=0;i<size;i++)
	{
		cin>>Arr[i];  //taking input
	}
	for(int i=0;i<size;i++)
	{
		cout<<Arr[i]<<" ";  //printing elements of array
	}
}
