class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n=s.size();
        int l=0;
        int mxlen=0;
        unordered_multiset<char>mp;
        for(int r=0; r<n; r++)
        {
            while(mp.find(s[r])!= mp.end())
            {
                mp.erase(s[l]);
                l++;
            }

            mp.insert(s[r]);
            mxlen=max(mxlen,r-l+1);
        }   
        return mxlen;     
    }
};