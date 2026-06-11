class Solution {
public:
    int m=1e9+7;
    
    typedef long long ll;

    ll power(ll base,ll exp)
    {
        if(exp==0)
        {
            return 1;
        }

        ll half=power(base,exp/2);
        ll result=(half*half)%m;

        if(exp%2==1)
        {
            result=(result*base)%m;
        }

        return result;

    }

    

    int getmx(unordered_map<int,vector<int>>&adj,int node,int parent)
    {
        int depth=0;

        for(auto &ngbr: adj[node])
        {
            if(ngbr==parent)
            {
                continue;
            }
            
            depth=max(depth,getmx(adj,ngbr,node)+1);
        }

        return depth;
    } 



    int assignEdgeWeights(vector<vector<int>>& edges) {

        unordered_map<int,vector<int>>adj;

        for(auto &u : edges)
        {
            int a=u[0];
            int b=u[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }


        int d=getmx(adj,1,-1);

        return power(2,d-1);
        
    }
};