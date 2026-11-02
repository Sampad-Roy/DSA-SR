class Solution {
public:
    int minMoves2(vector<int>& nums) {

        int n=nums.size();
        sort(begin(nums),end(nums));

        int cnt=0;

        for(int i=0; i<n; i++)
        {
            cnt+=abs(nums[n/2]-nums[i]);
        }
        

        return cnt;
        
    }
};