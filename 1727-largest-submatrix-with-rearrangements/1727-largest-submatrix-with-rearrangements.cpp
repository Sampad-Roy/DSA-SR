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
            // sort(curr.begin(),curr.end(),greater<int>());  akhane Sort korle to Col e change tai hobe na
            vector<int>ans=curr;

            sort(ans.begin(),ans.end(),greater<int>());        
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