class Solution {
public:
    void nextPermutation(vector<int>& nums) { 

        int n=nums.size();
        int pre=-1;
        for(int i=n-1; i>0; i--)
        {
            if(nums[i-1]<nums[i])
            {
               pre=i-1;
               break;
            }

        }

        if(pre==-1)
        {
             reverse(nums.begin(),nums.end());
             return;
        }

       
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