class Solution {
public:
    int maximumProduct(vector<int>&a) {

        vector<int>n,p;

        for(auto u:a)
        {
            if(u>=0) p.push_back(u);
            else n.push_back(u);
        }
        
        sort(begin(n),end(n));
        sort(rbegin(p),rend(p));

        int ans=INT_MIN;


        //All positive

        if(p.size()>=3)
        {
            ans=max(ans,p[0]*p[1]*p[2]);
        }
        //2 neg 1 pos

        if(n.size()>=2 && p.size()>=1)
        {
            ans=max(ans,n[0]*n[1]*p[0]);
        }

        if(p.size()==0)
        {   
            int x=n.size();
            ans=max(ans,n[x-1]*n[x-2]*n[x-3]);
        }

        return (int)ans;

    }
};