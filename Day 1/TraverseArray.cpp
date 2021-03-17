#include<iostream>
using namespace std;

main()
{
	int size;
	cin>>size;
	int Arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>Arr[i];
	}
	for(int i=0;i<size;i++)
	{
		cout<<Arr[i]<<" ";
	}
}
