#include<iostream>
using namespace std;

class Demo
{
	public:
		void merge(int A[],int lb,int mid,int ub)	//functin to convert subarray into single array in sorted manner
		{
			int B[ub+1];	//temporary array
			int i=lb;
			int j=mid+1;
			int k=lb;
			while(i<=mid && j<=ub)	//condition to sort the elements of subarrays
			{
				if(A[i]<A[j])
				{
					B[k]=A[i];
					i++;
				}
				else
				{
					B[k]=A[j];
					j++;
				}
				k++;
			}
			if(i>mid) //condition to put the remaining elements
			{
				while(j<=ub)
				{
					B[k]=A[j];
					j++;
					k++;
				}
			}
			else
			{
				while(i<=mid)
				{
					B[k]=A[i];
					i++;
					k++;
				}
			}
			int v=lb;
			while(v<k)	//copying the sorted elements into main array
			{
				A[v]=B[v];
				v++;
			}
			
		}
		
		
		void mergeSort(int A[],int lb,int ub)	//function to convert he array into subarrays
		{
			if(lb<ub)
			{
				int mid = (lb+ub)/2; //calculating mid elements
				mergeSort(A,lb,mid);	//using recursion to separate each element 
				mergeSort(A,mid+1,ub);
				merge(A,lb,mid,ub);
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
	obj.mergeSort(Arr,0,size-1);
	for(int i=0;i<size;i++)
	{
		cout<<Arr[i]<<" ";	//printing sorted array
	}
}
