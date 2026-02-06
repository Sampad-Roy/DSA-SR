class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(), nums.end());

        int l=0;
        int r=0;
        int mxlen=0;
        int cnt=1e9;
        while(r<n)
        { 
          if((1LL*nums[l]*k) >= nums[r])
          {
            mxlen=r-l+1;
            cnt=min(cnt,n-mxlen);
            r++;
          }
          else
          {
             l++;
          }

        }
        

        return cnt;
        
    }
};