class Solution {
public:
    int findDuplicate(vector<int>& nums) { 

        int n=nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(auto u:nums)
        {
            mp[u]++;
        }

        for(auto u:mp)
        {
          if(u.second>=2) return u.first;
        }
        return -1;


        
    }
};