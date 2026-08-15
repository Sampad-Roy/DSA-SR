class Solution {
public:
    int longestSubsequence(vector<int>& nums) {

        unordered_set<int>s;
        int sum=0;
        for(auto u:nums)
        {
            s.insert(u);
            sum^=u;
        }
        
        if(sum==0)
        {
            if(s.size()==1)
            {   
                if(nums[0]==0)
                {
                    return 0;
                }
                else return nums.size()-1;
            }
            else
            {
                return nums.size()-1;
            }
        }
      
       return nums.size();

        
    }
};