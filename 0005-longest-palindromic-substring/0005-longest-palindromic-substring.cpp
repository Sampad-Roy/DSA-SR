class Solution {
public:
    string longestPalindrome(string s) {
        
        int n=s.size();

        string ans="";

        for(int i=0; i<n; i++)
        {
            //Odd
            int srt=i,end=i;

            while(srt>=0 && end<n && s[srt]==s[end])
            {
                srt--;
                end++;
            }
            string temp=s.substr(srt+1,end-srt-1);
            if(temp.size()>ans.size())
            {
                ans=temp;
            }

            //Even
            srt=i,end=i+1;
            while(srt>=0 && end<n && s[srt]==s[end])
            {
                srt--;
                end++;
            }
            temp=s.substr(srt+1,end-srt-1);
            if(temp.size()>ans.size())
            {
                ans=temp;
            }
        }

        return ans;
    }
};