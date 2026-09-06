class Solution {
public:
    typedef unsigned long long ll;
    ll dp[1001][1001];

    ll solve(string s,string t,int i,int j,int n,int m) 
    {  

       if(j==m)
       {
        return dp[i][j]=1;
       }

       if(i==n)
       {
        return dp[i][j]=0;
       }

       if(dp[i][j] != -1)
       {
        return dp[i][j];
       }

       if(s[i]==t[j])
       {
          return dp[i][j]=solve(s,t,i+1,j+1,n,m)+solve(s,t,i+1,j,n,m);
       }
       else
       {
          return dp[i][j]=solve(s,t,i+1,j,n,m);
       }

       return -1;
       
    }  

    int numDistinct(string s, string t) {

       int i=0,j=0;
       int n=s.size();
       int m=t.size();

       memset(dp,-1,sizeof(dp));

       return solve(s,t,i,j,n,m);

    }
};