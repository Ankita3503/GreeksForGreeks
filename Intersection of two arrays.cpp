class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        int count=0;
        
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        
        for(int i=0;i<m;i++)
        {
            if(mp.find(b[i])!=mp.end())
            {
                count++;
                mp.erase(b[i]);
            }
        }
        return count;
    }
};
