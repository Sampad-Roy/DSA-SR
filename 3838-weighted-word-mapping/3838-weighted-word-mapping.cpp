class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {

        
       string ans="";

       for(auto u:words)
       {

        int cnt=0;
        for(auto x:u)
        {
           cnt+=weights[(int)(x-'a')];
        }
        cnt%=26;
        ans+=(char('z'-cnt));
       }

       return ans;


        
    }
};