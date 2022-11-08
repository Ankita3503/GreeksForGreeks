class Solution{
public:
    vector<int> minPartition(int N)
    {
        vector<int>v={2000,500,200,100,50,20,10,5,2,1};
        vector<int>Ans;
        int i=0;
        while(N>0)
        {
            if(v[i]<=N)
            {
                N=N-v[i];
                Ans.push_back(v[i]);
                
            }
            else
            {
            i++;
            }
            
        }
        return Ans;
    }
};
