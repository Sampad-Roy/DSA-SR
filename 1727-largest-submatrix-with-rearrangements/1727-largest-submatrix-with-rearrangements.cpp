class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {  


        int r=matrix.size();
        int c=matrix[0].size();
        int mx=0;


        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(matrix[i][j]==1 && i>0)
                {
                    matrix[i][j]+=matrix[i-1][j];
                }
            }

           vector<int>ans=matrix[i];
           sort(ans.begin(),ans.end(),greater<int>());

           for(int k=0; k<c; k++)
           {
            int base=k+1;
            int h=ans[k];
            mx=max(mx,base*h);
           }


        } 



        return mx;
    
    
        
    }
};