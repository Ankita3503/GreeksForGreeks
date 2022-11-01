// Brute force approach
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
        
        int sum=0;
        vector<int>v;
        int j=0;
       
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            while(sum>s)
            {
               
                    sum-=arr[j];
                    j++;
            }        
                
                if(sum==s)
                {
                    v.push_back(j+1);
                    v.push_back(i+1);
                  return v;
                }
            
        }
        
        
        return {-1};
    }
};

