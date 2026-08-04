class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        

        int n=nums.size();
        vector<int>ans;

        sort(begin(nums),end(nums));
        int mn=*min_element(begin(nums),end(nums));
        int mx=*max_element(begin(nums),end(nums));
        int x=0;
        for(int i=mn; i<=mx; i++)
        {
            if(x<n && nums[x]!=i)
            {
                ans.push_back(i);
            }
            else x++;
        }


        return ans;

    }
};