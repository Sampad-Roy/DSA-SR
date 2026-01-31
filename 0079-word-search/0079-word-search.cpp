class Solution {
public:
    int n,m;

    vector<vector<int>>d={{-1,0},{1,0},{0,1},{0,-1}};

    bool find(vector<vector<char>>&a,int i,int j, int idx, string &b)
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

        char temp=a[i][j];
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

        a[i][j]=temp;
        return false;       

    }


    bool exist(vector<vector<char>>& board, string word) {

        n=board.size();
        m=board[0].size();
        
        map<char,int>mp,mp1;


        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
             
              mp[board[i][j]]++;

            }
        }


        for(auto u:word)
        {
            mp1[u]++;
        }


        for(auto u:word)
        {
          if(mp1[u]>mp[u])
          {
            return false;
          }

        }



        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(board[i][j]==word[0] && find(board,i,j,0,word))
                {
                    return true;
                }
            }
        }

        return false;
        
    }
};