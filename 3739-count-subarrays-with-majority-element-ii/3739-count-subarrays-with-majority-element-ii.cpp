class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {

        unordered_map<int,int>mp;
        int n=nums.size();
        long long cu_sum=0,valid=0,result=0;
        mp[0]=1;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==target)
            {
              valid+=mp[cu_sum];
              cu_sum+=1;
            }
            else
            {  
                cu_sum-=1;
                valid-=mp[cu_sum];
            }

            mp[cu_sum]+=1;
            result+=valid;
        }


        return result;
        
    }
};