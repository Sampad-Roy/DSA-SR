class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {

        int r=matrix.size();
        int c=matrix[0].size();


        vector<int>pre(c,0);
        int mx=0;
        for(int i=0; i<r; i++)
        {   

            vector<int>curr=matrix[i];
            for(int j=0; j<c; j++)
            {
                if(curr[j]==1)
                {
                    curr[j]+=pre[j];
                }
            }
            sort(curr.begin(),curr.end(),greater<int>());
            vector<int>ans=curr;
        
            for(int k=0; k<c; k++)
            {
               int base=k+1;
               int h=ans[k];

               mx=max(mx,base*h);
            }

            pre=curr;
        }
        
        return mx;



        
    }
};