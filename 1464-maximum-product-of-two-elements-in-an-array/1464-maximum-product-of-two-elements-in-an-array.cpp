class Solution {
public:
    int maxProduct(vector<int>& nums) {

        sort(rbegin(nums),rend(nums));

        int mx1=nums[0]-1;
        int mx2=nums[1]-1;

        return mx1*mx2;
        
    }
};