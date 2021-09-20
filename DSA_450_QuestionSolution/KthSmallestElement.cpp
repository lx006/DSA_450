class Solution {
public:
    int findKthSmallest(int num[], int k) 
    {
        int len = sizeof(num)/sizeof(num[0]);
        sort(num,num+len);
        return num[k-1];
        
    }
    
    //min-heap method
   /* priority_queue<<int>,vector<int>,greater<int>> p ;
    for(int i=0;i<len;i++)
    {
        p.push(num[i]);
    }
    int ans,i=1;
    while(!p.empty())
    {
        if(i==k)
        {
            ans=i.top();
            break;
        }
        i++;
        p.pop();
    }
    cout<<ans<<endl;  */
};
