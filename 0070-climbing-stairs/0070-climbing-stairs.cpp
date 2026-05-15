class Solution {
public:
    int climbStairs(int n) 
    {  
       
      if(n==1) return 1;
      if(n==2) return 2;

      int a=1,b=2;
      int ans=0;
      for(int i=0; i<n-2; i++)
      {
         int temp=(a+b);
         ans=temp;
         a=b;
         b=temp;
      }
     return ans;
        
    }
};