class Solution {
public:
    int climbStairs(int n) {
        
           int x=0,y=1;
           int ans=0;
           for(int i=1; i<=n; i++)
           {

            ans=x+y;
            x=y;
            y=ans;

           }

           return ans;


    }
};