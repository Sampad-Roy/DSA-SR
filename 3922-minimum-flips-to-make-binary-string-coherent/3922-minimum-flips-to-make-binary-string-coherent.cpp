class Solution {
public:
    int minFlips(string s) {

       int n=s.size();
       int one=0,zero=0;

       for(auto u:s)
       {
        if(u=='1') one++;
        else zero++;
       }

       

       int ans=n;


       ans=min(ans,n-one); //all one
       ans=min(ans,n-zero); //all zero


       //cs=3
       ans=min(ans,one-1);

       //cs-4


       int stone=0,lastone=0;

       if(s[0]=='0') stone++; 
       if(s[n-1]=='0') lastone++;
       int re=0;
       for(int i=1; i<n-1; i++)
       {
        if(s[i]=='1') re++;
       }

       ans=min(ans,re+stone+lastone);


       if(ans==-1) return 0;
        

        return ans;
    }
};