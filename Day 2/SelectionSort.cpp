#include<iostream>
using namespace std;

class Demo
{
	public:
		void selectionSort(int A[],int size)
		{
			for(int step=0;step<size-1;step++) //outer loop is for number of steps or iteration
			{
				int min_id = step; //minimum element is assumed 
				for(int i=step+1;i<size;i++)	//inner loop is to find minimum element index
				{
					if(A[i]<A[min_id]) //comparison
					{
						min_id = i;	//set the index of minimum element
					}
				}
				if(min_id!=step)	//if the minimum index is not equal to starting index then swap
				{
					int temp = A[step];
					A[step] = A[min_id];
					A[min_id] = temp;
				}
			}
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
	obj.selectionSort(Arr,size);
	for(int i=0;i<size;i++)
	{
		cout<<Arr[i]<<" ";	//printing sorted array
	}
}
