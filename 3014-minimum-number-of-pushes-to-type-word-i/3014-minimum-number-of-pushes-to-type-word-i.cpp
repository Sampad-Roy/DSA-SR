class Solution {
public:
    int minimumPushes(string word) {

        if(word.size()<=8)
        {
            return word.size();
        } 

        int ans=0;
        
        map<char,int>mp;
        int cnt=0;
        for(auto u:word)
        {     
             if(mp.find(u)==mp.end())
             {
                mp[u]=(cnt/8)+1;
                cnt++;
             }
        }

        
        for(auto u:word)
        {
            ans+=mp[u];
        }

        return ans;

    }
};