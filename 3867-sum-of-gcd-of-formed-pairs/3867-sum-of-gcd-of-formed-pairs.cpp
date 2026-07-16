class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        
        int mx=nums[0];

        for(int i=0; i<nums.size(); i++)
        { 
            mx=max(mx,nums[i]);
            nums[i]=__gcd(mx,nums[i]);
            
       }

        sort(begin(nums),end(nums));

        int i=0,j=nums.size()-1;
        long long sum=0;
        while(i<j)
        {
           sum+=(__gcd(nums[i],nums[j]));
           i++;
           j--;
        }

        return sum;
        


        
    }
};