class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {

        int n=nums.size();
        vector<int>ans(n,0);
        for(int i=0; i<n; i++)
        {

            int shift=nums[i]%n;
            int idx=(i+shift)%n;
            if(idx<0)
            {
                idx+=n;
            }

            ans[i]=nums[idx];
        }


        return ans;

        
    }
};