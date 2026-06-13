class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        unordered_map<char,int>mp;
        unordered_map<int,char>mp1;
        char ch='a';
        for(int i=0; i<26; i++)
        {
            mp[i+'a']=weights[i];
        }

        for(int i=25; i>=0; i--)
        {
            mp1[i]=ch;
            ch++;
        }

        string ans="";
        for(auto u:words)
        {   
            int cnt=0;
            for(auto x:u)
            {
              cnt+=mp[x];
            }
            cnt%=26;
            ans+=mp1[cnt];
        }

        return ans;

    }
};