
class Solution
{
    
    public:
    vector<int> leaders(int a[], int n)
    {
        vector<int>ans;
        ans.push_back(a[n-1]);
        int j=0;
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=ans[j])
            {
                ans.push_back(a[i]);
                j++;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
};

