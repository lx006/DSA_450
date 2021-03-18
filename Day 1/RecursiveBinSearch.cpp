#include<iostream>
using namespace std;


class Bin 
{
	public:
		int binSearch(int A[],int num,int start,int end) //function to find element
		{
			while(start<=end) //iteration upto start==end
			{
				int mid = (start+end)/2;	//finding the mid element
				if(A[mid]==num) 	//if middle is equal to element
				{
					return mid;		//return middle element index
				}
				else if(A[mid]>num)		//if the element is less than the middle element
				{
					return binSearch( A,num,start,end-1);		//shift to left side by setting ending index 
				}
				else
				{
					return binSearch( A,num,start+1,end);	//else shift to right side by setting starting index
				}
			}
			return -1; //if element not found return -1
		}
		
		int sort(int A[],int n)		//function to sort array
		{
			for(int i=0;i<n;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					if(A[j]<A[i])	//if the elements are not in ascending swap their positions
					{
						int temp = A[i];
						A[i] = A[j];
						A[j] = temp;	
					}
				}
			}
		}
};

main()
{
	Bin obj; //creating object of the class
	int size;
	cin>>size;		//taking the size of array
	int Arr[size];	//array declaration
	for(int i=0;i<size;i++)
	{
		cin>>Arr[i];	//taking input of array
	}
	int element;
	cin>>element;		//element to search
	obj.sort(Arr,size);	//first sort the array by calling sort function
	for(int i=0;i<size;i++)
	{
		cout<<Arr[i]<<" ";	//printing sorted array
	}
	cout<<endl;
	int ans = obj.binSearch(Arr,element,0,size-1); 	//search the element by calling search function
	if(ans==-1)
	{
		cout<<"Element not found"<<endl;
	}
	else
	{
		cout<<"Element found at index "<<ans<<endl;
		cout<<"Element found at position "<<ans+1<<endl;
	}
}
