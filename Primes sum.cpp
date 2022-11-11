
class Solution {
public:
       bool isprime(int N)
       {
            for(int i=2;i<=sqrt(N);i++)
             {
               if(N%i==0)
                {
                return false;
                }
              }
         return true;
       }
       
    string isSumOfTwo(int N){
       
       for(int i=2;i<=N/2;i++)
       {
           if(isprime(i))
           {
               if(isprime(N-i))
               {
                   return "Yes";
               }
           }
       }
       return "No";
    }
};
