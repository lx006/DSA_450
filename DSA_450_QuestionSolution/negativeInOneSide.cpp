#include <iostream>
using namespace std;

int main()
{
	int arr[] = {2,-4,-8,6,4,-2,1,-4,0};
	int len = sizeof(arr)/sizeof(arr[0]);
	int i=0,j=0;
	for(i=0;i<len;i++)
	{
	    if(arr[i]<0)
	    {
	        if(i!=j)
	        {
	            int temp=arr[i];
    	        arr[i]=arr[j];
    	        arr[j]=temp;
    	        j++;    
	        }
	        
	    }
	    
	}
	for(int i=0;i<len;i++)
	{
	    cout<<arr[i]<<" ";
	}
	return 0;
}
