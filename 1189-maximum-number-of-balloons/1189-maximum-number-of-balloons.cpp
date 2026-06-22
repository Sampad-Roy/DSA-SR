class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        unordered_map<char,int>mp=
        {{'b',0},{'a',0},{'l',0},{'o',0},{'n',0}};
        int cnt=0;
        for(auto u:text)
        {
           if(mp.count(u))
           {
            mp[u]++;
           }
        }

        int ans=INT_MAX;
        for(auto u:mp)
        {
            if(u.first=='l' || u.first=='o')
            {  
              u.second=(int)u.second/2;
            }
            ans=min(ans,u.second);
        }
       

        if(ans>INT_MAX) return INT_MAX;
        else return ans;


    }
};