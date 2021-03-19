#include<iostream>
using namespace std;

class Demo
{
	public:
		void bubbleSort(int A[],int size)
		{
			for(int step=0;step<size-1;step++) //outer loop is for number of iterations
			{
				int flag = 0; //to check if the swapping is done or not 
				for(int i=0;i<size-1-step;i++)		//inner loop is for number of comparisons
				{
					if(A[i]>A[i+1])		//check the adjacent element
					{
						int temp = A[i+1];
						A[i+1] = A[i];	//perform swaaping
						A[i] = temp;
						flag = 1;	//if swapping done set it's value
					}		
				}
				if(flag==0)	//if no swapping done then it's already sorted
				break;	//come out of the loop
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
	obj.bubbleSort(Arr,size);
	for(int i=0;i<size;i++)
	{
		cout<<Arr[i]<<" ";	//printing sorted array
	}
		
}
