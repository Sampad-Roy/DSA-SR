class Solution {
public:

    //A : Sampad Roy


    int n;
    int dp[2][101][101];
    int solve(vector<int>&p,int person,int i,int m)
    {
         if(i>=n) return 0;

         if(dp[person][i][m]!=-1)
         {
            return dp[person][i][m];
         }

         int result;

         if(person==1) 
         {
            result=-1;
         }
         else
         {
            result=INT_MAX;
         }



         int cnt=0;

         for(int x=1; x<=min(2*m , (n-i)); x++)
         {  
            cnt+=p[i+x-1];

            if(person==1)
            {
               result=max(result, cnt+solve(p,0,i+x,max(m,x)));
            }
            else
            {
                result=min(result,solve(p,1,i+x,max(m,x)));
            }
         }

         return dp[person][i][m] = result;
    }

    int stoneGameII(vector<int>& piles) 
    {  

       memset(dp,-1,sizeof(dp));
       n=piles.size();
       return solve(piles,1,0,1);
        
        
    }
};