class Solution {
public:
    int m=1e9+7;
    int dp[201][201][2];
    int solve(int oneleft,int zeroleft,bool lastwasone,int limit)
    {


        if(oneleft==0 && zeroleft==0)
        {
            return 1;
        }

        if(dp[oneleft][zeroleft][lastwasone] != -1)
        {
            return dp[oneleft][zeroleft][lastwasone];
        }

       int result=0;

       if(lastwasone==true)
       {
          for(int len=1; len<=min(zeroleft,limit); len++)
          {
            result= (result + solve(oneleft,zeroleft-len,false,limit))%m;
          }

       }

       else
       {
           for(int len=1; len<=min(oneleft,limit); len++)
           {
            result=(result+solve(oneleft-len,zeroleft,true,limit))%m;
           }
       }

       return dp[oneleft][zeroleft][lastwasone] = result;

    }

   



    int numberOfStableArrays(int zero, int one, int limit) {
     
     memset(dp,-1,sizeof(dp));


     int strt_one=solve(one,zero,false,limit);

     int strt_zero=solve(one,zero,true,limit);

     return (strt_one+strt_zero)%m;

        
    }
};