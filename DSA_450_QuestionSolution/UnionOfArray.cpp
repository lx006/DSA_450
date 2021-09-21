 //Function to return the count of number of elements in union of two arrays.

//using set
    int doUnion(int a[], int n, int b[], int m)  
    {
        int count=0;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            s.insert(b[i]);
        }
        set<int>:: iterator itr;
        for(itr=s.begin();itr!=s.end();itr++)
        {
            count++;
        }
        //code here
        return count;
    } //o(m*log(m)+n*log(n))

//using map

int doUnion(int a[], int n, int b[], int m)  
    {
        int count=0;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp.insert({a[i],i});
        }
        for(int i=0;i<m;i++)
        {
            mp.insert({b[i],i});
        }
        map<int,int> :: iterator itr;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            count++;
        }
        //code here
        return count;
    }//o(m+n)
