class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int n=nums.size();
      int f=1; 
      sort(nums.begin(),nums.end());
      
      for(int i=1; i<n-1; i++)
      {
        if(nums[i]==nums[i+1])
        {
            f++;
            if(f>n/2) 
            {
              return nums[i];
            }
        }
        else
        {
            f=1;
        }

      }

     return nums[0];

    }
};