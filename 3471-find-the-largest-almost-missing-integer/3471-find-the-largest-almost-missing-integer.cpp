class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();

        if(k==1 && k==n)
        {
            return -1;
        }
        unordered_map<int,int>mp;
        for(int i=0; i<=n-k; i++)
        {  
           set<int>s;
           for(int j=0; j<k; j++)
           {
             s.insert(nums[i+j]);
           }

           for(auto u:s)
           {
            mp[u]++;
           }
        }
        
        int ans=-1;
        for(auto u:mp)
        {
            if(u.second==1)
            {
                ans=max(ans,(int)u.first);
            }
        }

        return ans;

    }
};