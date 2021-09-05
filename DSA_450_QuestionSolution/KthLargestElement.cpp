class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        int len = nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        return nums[k-1];
        
    }
};
