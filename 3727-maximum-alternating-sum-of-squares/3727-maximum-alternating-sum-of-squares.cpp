class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
    int n=nums.size();

    for(auto &u:nums)
    {
        u=abs(u);
    }
    sort(begin(nums),end(nums));
    
    long long p_r=(n+1)/2;
    long long  m_r=n-p_r;
    long long ans=0;
    int i=0;
    while(i<n && m_r)
    {
       ans-=(1LL * nums[i]*nums[i]);
       i++;
       m_r--;
    }

    while(i<n && !m_r && p_r)
    {
        ans+=(1LL * nums[i]*nums[i]);
        i++;
        p_r--;
    }


    return ans;

    }
};