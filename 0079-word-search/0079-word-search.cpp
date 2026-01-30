class Solution {
public:

   int n,m;
   vector<vector<int>> d={{1,0},{0,1},{0,-1},{-1,0}};
   bool find(vector<vector<char>>&a,int i,int j,int idx, string &b)
   {  

      if(idx==b.length()) 
      {
        return true;
      }

      if(i<0 || j<0 || i>=n || j>=m || a[i][j]=='#')
      {
        return false;
      }  
      if(a[i][j]!=b[idx])
      {
        return false;
      }

      char x=a[i][j];
      a[i][j]='#';     
      
      for(auto u:d)
      {
        int new_i=i+u[0];
        int new_j=j+u[1];

        if(find(a,new_i,new_j,idx+1,b))
        {
            return true;
        }

      }

    a[i][j]=x;

    return false;
   } 

    bool exist(vector<vector<char>>&a, string b) {     
    n=a.size();
    m=a[0].size();

    unordered_map<char,int>mp,mp1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            mp[a[i][j]]++;
        }
    }


    for(auto u:b)
    {

      mp1[u]++;

    }

    for(auto u:b)
    {
        if(mp1[u]>mp[u])
        {
            return false;
        }
    }
    


    if(mp1[b[0]]>mp1[b.back()])
    {
      reverse(b.begin(),b.end());
    }



    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]==b[0] && find(a,i,j,0,b))
            {
                return true;
            }
        }
    }

    return false;
        
    }
};