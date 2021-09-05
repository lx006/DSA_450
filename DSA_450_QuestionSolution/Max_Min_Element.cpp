pair<long long, long long> getMinMax(long long a[], int n) 
{
    long long min = a[0];
    long long max = a[0];
    for(int i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min = a[i];
        }
        if(max<a[i])
        {
            max = a[i];
        }
    }
    return make_pair(min,max);
    
}
