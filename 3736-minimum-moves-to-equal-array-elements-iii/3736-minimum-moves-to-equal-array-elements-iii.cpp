class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int n1=*max_element(nums.begin(),nums.end());
        sort(begin(nums),end(nums));

        int cnt=0;

        for(int i=0; i<n; i++)
        {
            cnt+=abs(n1-nums[i]);
        }
        

        return cnt;
        
    }
};