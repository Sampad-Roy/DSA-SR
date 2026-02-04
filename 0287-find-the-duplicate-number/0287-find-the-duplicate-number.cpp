class Solution {
public:
    int findDuplicate(vector<int>& nums) { 

        int n=nums.size();
        for(int i=0; i<n-1; i++)
        {
            if(nums[i]==nums[i+1])
            {
                return nums[i];
            }
        }
        unordered_map<int,int>mp;
        for(auto u:nums) mp[u]++;
        
        if(mp.size()==1)
        {
            return nums[0];
        }
        for(auto u:mp)
        {
            if(u.second>=2) return u.first;
        }

        return -1;


        
    }
};