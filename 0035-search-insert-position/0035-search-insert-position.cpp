class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int n=nums.size();
        int srt=0,end=n-1;

        while(srt<=end)
        {
            int mid=srt+(end-srt)/2;
            if(nums[mid]==target) 
            {
                return mid;
            }

            if(target>nums[mid])
            {
               srt=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return srt;
        
    }
};