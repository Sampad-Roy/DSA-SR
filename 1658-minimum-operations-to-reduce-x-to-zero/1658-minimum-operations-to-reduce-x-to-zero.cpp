class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int n=nums.size();
        int sum=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        for(int i=0; i<n; i++)
        {
           sum+=nums[i];
           mp[sum]=i;
        }
        if(sum<x)
        {
            return -1;
        }

        int rest=sum-x;
        int longest=INT_MIN;

        sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            if(mp.count(sum-rest))
            {
               longest=max(longest,i-mp[sum-rest]);
            }
        }

        if(longest!=INT_MIN)
        {
            return (int) n-longest;
        }
        
        return -1;


    }
};