class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n=nums.size();
        int srt=0,end=n-1;

        while(srt<=end)
        {
            int mid=srt+(end-srt)/2;

            if(nums[mid]==target)
            {
                return mid;
            }

            //l

            if(nums[srt]<=nums[mid])
            {
                if(target <= nums[mid] && target >= nums[srt])
                {
                    end=mid-1;
                }
                else
                {
                    srt=mid+1;
                }
            }

            else
            {
                if(target>=nums[mid] && target<=nums[end])
                {
                    srt=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }

        }

        return -1;
        
    }
};