class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        string output;
        unordered_map<string,int>mp;
        int first_freq=0,second_freq=0;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
           
        }
       
        for(auto i:mp)
        {
            if(i.second>first_freq)
            {
                first_freq=max(i.second,first_freq);
            }
        }
        
        for(auto i:mp)
        {
            if(i.second!=first_freq && i.second>second_freq)
            {
                second_freq=max(i.second,second_freq);
                output=i.first;
            }
        }
        
        
      return output;
        
    }
};
