class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        

        int n=s.size();

        int cnt_1=0;
        for(auto u:s)
        {
            if(u=='1') cnt_1++;
        }


        vector<int>c_zero;

        int i=0;
        while(i<n)
        {
          if(s[i]=='0')
          { 
            int srt=i;
            while(i<n && s[i]=='0')
            {
                i++;
            }
            c_zero.push_back(i-srt);
          }
          else
          {
            i++;
          }
        }

        int mx=0;
        for(int i=1; i<c_zero.size(); i++)
        {
            mx=max(mx,c_zero[i]+c_zero[i-1]);
        }

        return mx+cnt_1;

    }
};