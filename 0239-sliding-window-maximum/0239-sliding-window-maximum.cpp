class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        

        int n=nums.size();
        deque<int>dp;
        vector<int>ans;

        for(int i=0; i<k; i++)
        {
            while(dp.size()>0 && dp.back()<=nums[i])
            {
                dp.pop_back();
            }
            dp.push_back(i);
        }

        //window

        for(int i=k; i<nums.size(); i++)
        {
            ans.push_back(nums[dp.front()]);
            while(dp.size()>0 && dp.front()<=i-k)
            {
                dp.pop_front();
            }
            while(dp.size()>0 && nums[dp.back()]<=nums[i])
            {
                dp.pop_back();
            }

            dp.push_back(i);

        }

        ans.push_back(nums[dp.front()]);
        return ans;


    }
};