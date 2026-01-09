class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      
        int n=nums.size();
        int pre=-1;

        if(n<=1)
        {
            return;
        }
        for(int i=n-2; i>=0; i--)
        {
            if(nums[i]<nums[i+1])
            {
                pre=i;
                break;
            }
        }

        if(pre==-1)
        {   
            reverse(nums.begin(),nums.end());
            return;
        }

        int t=nums[pre];
        for(int i=n-1; i>pre; i--)
        {
            if(nums[i]>nums[pre])
            {
                swap(nums[i],nums[pre]);
                break;
            }
        }

        reverse(nums.begin()+pre+1,nums.end());
        
    }
};