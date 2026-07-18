class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        int mx=*max_element(begin(nums),end(nums));
        int mn=*min_element(begin(nums),end(nums));

        return (int)__gcd(mx,mn);
    }
};