class Solution {
public:
    int missingInteger(vector<int>& nums) {

        int n=nums.size();
        unordered_map<int,int>mp;

        for(auto u:nums) mp[u]++;

        // 1 2 3 2 5 
        // 1 3 6 8 12

        int sum=nums[0];
        int first=nums[0];

        for(int i=1; i<n; i++)
        {
            if(nums[i]==first+1)
            {
              sum+=nums[i];
              first=nums[i];
            }
            else
            {
                break;
            }
        }
        
        while(mp.find(sum)!=mp.end())
        {
            sum++;
        }

        return sum;
    
    }
};