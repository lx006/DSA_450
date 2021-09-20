void sort012(int a[], int n)
    {
        int zero=0,one=0,two=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                zero++;
            }
            else if(a[i]==1)
            {
                one++;
            }
            else
            {
                two++;
            }
        }  //can use switch instead of if here.
            int i=0;
            while(zero!=0)
            {
                a[i]=0;
                i++;
                zero--;
            }
            while(one!=0)
            {
                a[i]=1;
                i++;
                one--;
            }
            while(two!=0)
            {
                a[i]=2;
                i++;
                two--;
            }
            
         
    }
