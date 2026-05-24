class Solution {
public:
    int minOperations(vector<int>& nums, int k) {


        int n=nums.size();
        int ans=INT_MAX;
        for(int i=0; i<k; i++)
        {
          for(int j=0; j<k; j++)
          {
            if(i==j)
            {
                continue;
            }
                int cost=0;
                for(int l=0; l<n; l++)
                {
                    int x=nums[l]%k;

                    if(l%2==0)
                    {   
                        int d=abs(x-i);
                        cost+=min(d,k-d);
                    }
                    else
                    {   
                        int d=abs(x-j);
                        cost+=min(d,k-d);
                    }
                }
                ans=min(ans,cost);
          }
        }

        return ans;
        
    }
};