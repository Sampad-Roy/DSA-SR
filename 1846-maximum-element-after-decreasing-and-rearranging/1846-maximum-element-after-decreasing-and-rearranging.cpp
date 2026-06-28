class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& nums) {

        int n=nums.size();
        
        if(n==1) return 1;
       
        sort(begin(nums),end(nums));

        int mxx=1;
        if(nums[0]>1)
        {
            nums[0]=1;
        }

        for(int i=1; i<n; i++)
        {
           if(abs(nums[i]-nums[i-1])>1)
           {
            nums[i]=nums[i-1]+1;
           }
           mxx=max(mxx,nums[i]);
        }
        mxx=max(nums[0],mxx);

       return mxx;

        
        
    }
};