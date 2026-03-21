class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());


        if(s.size()!=t.size())
        {
            return false;
        }
        
        unordered_map<char,int>mp1,mp2;


        for(int i=0; i<s.size(); i++)
        {
           mp1[s[i]]++;
           mp2[t[i]]++;
        }

        for(auto u:mp1)
        {
            if(mp1[u.first]!=mp2[u.first]) return false;
        }

        return true;
        
    }
};