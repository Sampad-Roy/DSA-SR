class Solution {
public:
    int maxProduct(vector<int>& nums) { 

        int n=nums.size();
        long long mx=-1e9;
        long long pre=1;
        long long suf=1;  
        for(int i=0; i<n; i++)
        {  
         
           if(pre==0)
           {  
            pre=1;
           }
           if(suf==0) 
           {
            suf=1;
           }
           pre*=nums[i];
           suf*=nums[n-i-1];
           mx=max(mx,max(pre,suf));
        } 

        return mx;
    }
};