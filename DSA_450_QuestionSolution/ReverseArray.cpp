#include <iostream>
using namespace std;
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
}

void reverse(int arr[],int start, int end)
{
    while(start<end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
}

int main() 
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        int start,end;
        start=0;
        end=size-1;
        reverse(arr,start,end);
        printarray(arr,size);
        
    }
	return 0;
}
