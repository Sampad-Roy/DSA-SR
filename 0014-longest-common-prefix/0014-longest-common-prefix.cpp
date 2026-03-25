class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    

    int n=strs.size();
    sort(strs.begin(),strs.end());
    string s=strs[0],s1=strs[n-1];
    string ans="";
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==s1[i])
        {
            ans+=s[i];
        }
        else
        {
            break;
        }
    }

    return ans;

        
    }
};