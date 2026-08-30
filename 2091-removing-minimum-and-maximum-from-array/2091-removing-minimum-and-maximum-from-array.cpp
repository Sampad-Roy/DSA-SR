class Solution {
public:
    int minimumDeletions(vector<int>& nums) 
    {
        int n=nums.size();
        int mxidx=0,mx=nums[0];
        int mnidx=0,mn=nums[0];
          
        for(int i=1; i<n; i++)
        {
           if(mx<nums[i])
           {
            mxidx=i;
            mx=nums[i];
           }


           if(mn>nums[i])
           {
            mnidx=i;
            mn=nums[i];
           }
        }
        // 1 2 3 4 5 6 7 8 

        int left=min(mxidx,mnidx);
        int right=max(mxidx,mnidx);
        int op1=n-left; //right
        int op2=right+1; //left
        int op3=(left+1)+(n-right); //Both 

        return min(op1,min(op2,op3));

    }
};