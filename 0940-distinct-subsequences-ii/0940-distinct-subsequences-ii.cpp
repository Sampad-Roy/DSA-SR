class Solution {
public:
    long long m=1e9+7;
    int dp[2001];
    vector<int>pre;

    int solve(int n)
    {
        if(n==0) return 1;

        if(dp[n]!=-1)
        {
            return dp[n];
        }

        int total = (2*solve(n-1))%m;

        if(pre[n]!=0)
        {
          int dup = solve(pre[n]-1)%m;
          total=(total-dup+m)%m;
        }

        return dp[n] = total;
    }


    int distinctSubseqII(string s)
     {

        memset(dp,-1,sizeof(dp));
        int n=s.size();
        vector<int>last(26,0);
        pre.assign(n+1,0);

        for(int i=1; i<=n; i++)
        {
            int idx=s[i-1]-'a';
            pre[i]=last[idx];

            last[idx]=i;
        }

        return (solve(n)-1+m)%m;
        
    }
};