class Solution {
public:

   void dfs(int u,unordered_map<int,vector<pair<int,int>>>&adj,vector<bool>&visited,int &ans)
   {

       visited[u]=true;

       for(auto &temp:adj[u])
       {
        int v=temp.first;
        int d=temp.second;

        ans=min(ans,d);

        if(!visited[v])
        {
         dfs(v,adj,visited,ans);
        }

       }

   }




    int minScore(int n, vector<vector<int>>& roads) {

        unordered_map<int,vector<pair<int,int>>>adj;

        for(auto &vec: roads)
        {
          int u=vec[0];
          int v=vec[1];
          int d=vec[2];


          adj[u].push_back({v,d});
          adj[v].push_back({u,d});

        }
        vector<bool>visited(n,false);
        int ans=INT_MAX;
        dfs(1,adj,visited,ans);

        return ans;
        
    }
};