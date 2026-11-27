class Solution {
public:
    int maximumSaleItems(vector<vector<int>>&a, int b) {

        int n=a.size();
        vector<int>free(n,0);
        for(int i=0; i<n; i++)
            {
                int f1=a[i][0];
                for(int j=0; j<n; j++)
                    {
                        if(i==j) continue;
                        int f2=a[j][0];
                        if(f2%f1==0)
                        {
                            free[i]++;
                        }
                    }
            }

        vector<int>dp(b+1,0);

        for(int i=0; i<n; i++)
            {
                int cost=a[i][1];
                int gain=1+free[i];
                for(int x=b; x>=cost; x--)
                    {
                        dp[x]=max(dp[x],dp[x-cost]+gain);
                    }
            }

            for(int i=0; i<n; i++)
            {
                int cost=a[i][1];
                for(int x=cost; x<=b; x++)
                    {
                        dp[x]=max(dp[x],dp[x-cost]+1);
                    }
            }

        

               
          return *max_element(dp.begin(),dp.end());
        

        
        
    }
};