class Solution {
public:
    int maximumLengthSubstring(string s) {
        // b c b b b c b a
        int n=s.size();
        unordered_map<int,int>mp;
        int mx=0;
        int i=0,j=0;
        while(j<n)
        {
            mp[s[j]]++;

            while(mp[s[j]] > 2)
            {
                mp[s[i]]--;
                i++;
            }
            
            mx=max(mx,j-i+1);
            j++;
        }
     

        return mx;
    
        
    }
};