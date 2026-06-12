class Solution {
public:
    int m = 1e9 + 7;

    typedef long long ll;

    ll power(ll base, ll exp)
    {
        if(exp == 0)
        {
            return 1;
        }

        ll half = power(base, exp / 2);
        ll result = (half * half) % m;

        if(exp % 2)
        {
            result = (result * base) % m;
        }

        return result;
    }

    vector<int> depth;
    vector<vector<int>> up;
    int LOG = 18;

    int lca(int u, int v)
    {
        if(depth[u] < depth[v])
        {
            swap(u, v);
        }

        int diff = depth[u] - depth[v];

        for(int i = LOG - 1; i >= 0; i--)
        {
            if((diff >> i) & 1)
            {
                u = up[u][i];
            }
        }

        if(u == v)
        {
            return u;
        }

        for(int i = LOG - 1; i >= 0; i--)
        {
            if(up[u][i] != up[v][i])
            {
                u = up[u][i];
                v = up[v][i];
            }
        }

        return up[u][0];
    }

    vector<int> assignEdgeWeights(vector<vector<int>>& edges,
                                  vector<vector<int>>& queries)
    {
        int n = edges.size() + 1;

        vector<vector<int>> adj(n + 1);

        for(auto &e : edges)
        {
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        depth.assign(n + 1, 0);
        up.assign(n + 1, vector<int>(LOG));

        // BFS
        queue<int> q;
        vector<int> vis(n + 1, 0);

        q.push(1);
        vis[1] = 1;
        up[1][0] = 1;

        while(!q.empty())
        {
            int node = q.front();
            q.pop();

            for(auto child : adj[node])
            {
                if(vis[child])
                {
                    continue;
                }

                vis[child] = 1;
                depth[child] = depth[node] + 1;
                up[child][0] = node;

                q.push(child);
            }
        }

        // Binary Lifting
        for(int j = 1; j < LOG; j++)
        {
            for(int i = 1; i <= n; i++)
            {
                up[i][j] = up[ up[i][j - 1] ][j - 1];
            }
        }

        vector<int> ans;

        for(auto &q : queries)
        {
            int u = q[0];
            int v = q[1];

            int L = lca(u, v);

            long long dist =
                depth[u] + depth[v] - 2LL * depth[L];

            if(dist == 0)
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(power(2, dist - 1));
            }
        }

        return ans;
    }
};