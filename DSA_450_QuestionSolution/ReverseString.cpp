string reverseWord(string str)
{
    int n= str.length();
    int start,end;
    start=0;
    end=n-1;
    while(start<end)
    {
        swap(str[start],str[end]);
        start++;
        end--;
    }
    return str;
  
}
