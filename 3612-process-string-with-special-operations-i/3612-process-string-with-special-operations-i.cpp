class Solution {
public:
    string processStr(string s) {
        
        string ans="";
        for(auto u:s)
        {
            if(u=='*')
            {
                if(ans.size()>0)
                {
                    ans.pop_back();
                }
            }
            else if(u=='#')
            {
                ans+=ans;
            }
            else if(u=='%')
            {
                reverse(ans.begin(),ans.end());
            }
            else
            {
                ans+=u;
            }
        }

        return ans;
    }
};