class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int output=0;
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<size;i++)
        {
            mp[a[i]]++;
        }
        for(auto i:mp)
        {
          if(i.second>ans)
          {
              ans=max(ans,i.second);
              output=i.first;
          }
        }
        
        if(ans>size/2)
        {
            return output;
        }
        return -1;
    }
};
