#include<iostream>
using namespace std;

class Demo
{
	public:
		
		void insertionSort(int A[],int size)
		{
			for(int i=1;i<size;i++)	//outer loop for unsorted sublist
			{
				int temp = A[i];	//putting key element in temp
				int j = i-1;	//initialize j
				while(j>=0 && temp<A[j])	//inner loop for comparison to make the list sorted
				{
					A[j+1]=A[j];	//right shift the element
					j = j-1;	//decrement j
				}		
				A[j+1] = temp;		//assigning the key element at the suitable place
			}
		}	
};

main()
{
	Demo obj;	//creating object of the class
	int size;
	cin>>size;		//taking the size of array
	int Arr[size];	//array declaration
	for(int i=0;i<size;i++)
	{
		cin>>Arr[i];	//taking input of array
	}
	obj.insertionSort(Arr,size);	//calling the function
	for(int i=0;i<size;i++)
	{
		cout<<Arr[i]<<" ";	//printing sorted array
	}
}
