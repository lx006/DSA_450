#include<iostream>
using namespace std;

class Demo
{
	public:
		void quickSort(int A[],int lb,int ub)
		{
			int location;
			if(lb<ub)
			{
				location = partition(A,lb,ub);
				quickSort(A,lb,location-1);
				quickSort(A,location+1,ub);
			}
		}
		
		int partition(int A[],int lb,int ub)
		{
			int pivot = A[lb];
			int start = lb;
			int end = ub;
			while(start<end)
			{
				while(A[start]<=pivot)
				{
					start++;
				}
				while(A[end]>pivot)
				{
					end--;
				}
				if(start<end)
				{
					swap(&A[start],&A[end]);
				}
			}
			swap(&A[lb],&A[end]);
			return end;
		}
		
		void swap(int *a,int *b)
		{
			int t = *a;
			*a = *b;
			*b = t;
		}
};


main()
{	
	Demo obj;	//creating object of loop
	int size;
	cin>>size;		//taking the size of array
	int Arr[size];	//array declaration
	for(int i=0;i<size;i++)
	{
		cin>>Arr[i];	//taking input of array
	}
	obj.quickSort(Arr,0,size-1);
	for(int i=0;i<size;i++)
	{
		cout<<Arr[i]<<" ";	//printing sorted array
	}
}
