class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            int x=nums[i];
            int r=target-x;
            if(mp.find(r)!=mp.end())
            {
                return {i,mp[r]};
            }
            mp[x]=i;
        }

        return {};
    }
};