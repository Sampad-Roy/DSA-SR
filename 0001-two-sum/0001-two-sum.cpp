class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int i=0; 
        int j=1;
        int n=nums.size();
        while(i<n-1)
        {
            if(j>=n)
            {
                i++;
                j=i+1;
                continue;
            }
            
            if(nums[i]+nums[j]==target)
            {
                return {i,j};
            }
            j++;
        }

        return {};
    }
};