class Solution {
public:
    void setZeroes(vector<vector<int>>&a) {
     int n=a.size();
     int m=a[0].size();
     vector<int>r(n,0),c(m,0);



     for(int i=0; i<n; i++)
     {
        for(int j=0; j<m; j++)
        {
          if(a[i][j]==0)
          {
               r[i]=1;
               c[j]=1;
          }
        }
     }

     for(int i=0; i<n; i++)
     {
        for(int j=0; j<m; j++)
        {
            if(r[i]==1 || c[j]==1)
            {
                a[i][j]=0;
            }
        }
     }



    }
};