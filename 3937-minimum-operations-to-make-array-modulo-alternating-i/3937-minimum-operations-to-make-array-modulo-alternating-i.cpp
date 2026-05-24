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
                        cost+=min((i-x+k)%k,(x-i+k)%k);
                    }
                    else
                    {
                        cost+=min((j-x+k)%k, (x-j+k)%k);
                    }
                }
                ans=min(ans,cost);
          }
        }

        return ans;
        
    }
};