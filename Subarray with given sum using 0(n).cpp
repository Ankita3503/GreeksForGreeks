
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        
        if(s==0)
        {
          return {-1};    
        }
        
        int current_sum=arr[0];
        vector<int>v;
        int j=0;
       
        for(int i=0;i<n;)
        {
              if(current_sum==s)
                {
                    v.push_back(j+1);
                    v.push_back(i+1);
                    return v;
                }
            
            if(current_sum>s)
            {
            current_sum-=arr[j];
            j++;
            continue;
            }   
            
            i++;
            current_sum+=arr[i];
        }
        
        
        return {-1};
    }
};
