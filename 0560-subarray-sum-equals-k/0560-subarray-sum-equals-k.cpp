class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n=nums.size();
        vector<int>pre(n,0);
        pre[0]=nums[0];
        for(int i=1; i<n; i++)
        {
            pre[i]=pre[i-1]+nums[i];
        }
        unordered_map<int,int>mp;
        int cnt=0;
        for(int j=0; j<n; j++)
        {
            if(pre[j]==k)
            {
                cnt++;
            }
            int val=pre[j]-k;
            if(mp.count(val))
            {
                cnt+=mp[val];
            }
            mp[pre[j]]++;
        }



        return cnt;
        
    }
};