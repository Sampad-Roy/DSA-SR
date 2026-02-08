class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        vector<int>c_a(n,0),c_b(n,0);

        int cntb=0;
        for(int i=0; i<n; i++)
        {
            c_b[i]=cntb;
            if(s[i]=='b')
            {
                cntb++;
            }
        }
        int cnta=0;
        for(int i=n-1; i>=0; i--)
        {
            c_a[i]=cnta;
            if(s[i]=='a')
            {
                cnta++;
            }
        }
        int mn=1e9;
        for(int i=0; i<n; i++)
        {
          mn=min(mn,c_a[i]+c_b[i]);
        }

        
        return mn;


    }
};