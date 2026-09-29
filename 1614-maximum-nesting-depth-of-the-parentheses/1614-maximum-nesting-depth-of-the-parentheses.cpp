class Solution {
public:
    int maxDepth(string s) {

        int mx=0;

        int cnt=0;
        for(auto u:s)
        {
            if(u=='(')
            {
               cnt++;
               mx=max(mx,cnt);
            }
            else
            {   
                if(u==')') cnt--;
            }
        }

        return mx;
        
    }
};