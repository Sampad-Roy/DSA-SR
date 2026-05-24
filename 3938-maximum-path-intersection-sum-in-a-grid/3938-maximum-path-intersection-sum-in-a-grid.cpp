class Solution {
public:
    int maxScore(vector<vector<int>>&a) {
    int ans=INT_MIN;        


      int n=a.size();
      int m=a[0].size();

      for(int i=0; i<n; i++)
      {  
         int rowwise=a[i][0]+a[i][1];
         if(i==0 || i==n-1)
         { 
           int curr=a[i][0]+a[i][1];


           for(int j=2; j<m; j++)
           {
              curr=max((curr+a[i][j]) , (a[i][j-1]+a[i][j]));
              rowwise=max(curr,rowwise);
           }
         }
         else
         {
           
          int curr=max(0,a[i][0]);
          for(int j=1; j<m; j++)
          {
            curr+=a[i][j];
            rowwise=max(curr,rowwise);
            if(j!=m-2)
            {
                curr=max(0,curr);
            }
          }

         }
         ans=max(ans,rowwise);
      }



      // return ans;

      vector<vector<int>>b(m,vector<int>(n));

      for(int i=0; i<n; i++)
      {
        for(int j=0; j<m; j++)
        {
            b[j][i]=a[i][j];
        }
      }

     n=b.size();
     m=b[0].size();

      for(int i=0; i<n; i++)
      {  
         int rowwise=b[i][0]+b[i][1];
         if(i==0 || i==m-1)
         { 
           int curr=b[i][0]+b[i][1];
           for(int j=2; j<m; j++)
           {
              curr=max((curr+b[i][j]),(b[i][j-1]+b[i][j]));
              rowwise=max(curr,rowwise);
           }
         }
         else
         {
           
          int curr=max(0,b[i][0]);
          for(int j=1; j<m; j++)
          {
            curr+=b[i][j];
            rowwise=max(curr,rowwise);
            if(j!=m-2)
            {
             curr=max(0,curr);
            }
          }

         }
         ans=max(ans,rowwise);
      }


      return ans;
        
    }
};