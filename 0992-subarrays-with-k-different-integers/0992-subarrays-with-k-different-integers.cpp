class Solution {
public:

  int function(vector<int>&nums, int k)
  {

    int l=0,r=0;
    int n=nums.size();
    int mxlen=0;
    map<int,int>mp;
    while(r<n)
    {
       mp[nums[r]]++;
       while(mp.size()>k)
       {
          mp[nums[l]]--;
          if(mp[nums[l]]==0)
          {
            mp.erase(nums[l]);
          }
          l++;
       }

       mxlen+=(r-l+1);
       r++;
    }

    return mxlen;

  }  


    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
           return function(nums,k)-function(nums,k-1);

    }
};