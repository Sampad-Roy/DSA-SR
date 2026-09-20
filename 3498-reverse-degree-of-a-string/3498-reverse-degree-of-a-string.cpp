class Solution {
public:
    int reverseDegree(string s)
    {   
        int ans=0;
        int n=s.size();
        
        for(int i=1; i<=n; i++)
        {
            ans+=((int)('z'-s[i-1]+1))*i;
        }

        return ans;

    }
};


