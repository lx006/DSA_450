long long maxSubarraySum(int arr[], int n)
    {
        long long max_sum = INT_MIN ,updated_sum = 0 ;
        for(int i=0;i<n;i++)
        {
           updated_sum = updated_sum + arr[i];
           if(updated_sum > max_sum)
           {
               max_sum = updated_sum;
           }
           if(updated_sum<=0)
           {
               updated_sum=0;
           }
        }
        return max_sum;
        
    /*    long long min = INT_MIN;
       long long m = min;
       
       int i;
       long long sum = 0;
       
       for(i=0; i<n; i++)
       {
           sum = sum + arr[i];
           
           if(sum >= m)
               m = sum;
               
           if(sum < 0)
               sum = 0;
       }
       
       return m; */
    }
