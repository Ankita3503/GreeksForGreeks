class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
     
       
        map<string,int>mp;
       
        for(int i=0;i<n;i++)
        {
           mp[contact[i]]++; 
        }
       
       vector<vector<string>>output;
       for(int i=0;i<s.size();i++)
       {
           vector<string>v;
           
           for(auto j:mp)
           {
               if(j.first.substr(0,i+1)==s.substr(0,i+1))
               {
                  v.push_back(j.first); 
               }
           }
           if(v.size()==0)
           {
               v.push_back("0");
           }
           output.push_back(v);
       }
       return output;
    }
};
