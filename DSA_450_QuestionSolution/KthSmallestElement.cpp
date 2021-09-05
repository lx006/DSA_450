class Solution {
public:
    int findKthLargest(int num[], int k) 
    {
        int len = sizeof(num)/sizeof(num[0]);
        sort(num,num+len);
        return num[k-1];
        
    }
};
