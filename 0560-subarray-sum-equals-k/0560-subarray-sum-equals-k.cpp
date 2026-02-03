class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    

    int n=nums.size();
    vector<int>pre(n,0);
    unordered_map<int,int>mp;
    pre[0]=nums[0];
    for(int i=1; i<n; i++)
    {
     pre[i]=pre[i-1]+nums[i];
    }
   
    int cnt=0;
    for(int j=0; j<n; j++)
    {
        if(pre[j]==k) cnt++;

        int val=pre[j]-k;
        if(mp.find(val)!=mp.end())  
        {
            cnt+=mp[val];
        }
        if(mp.find(pre[j])==mp.end())
        {
            mp[pre[j]]=0;
        }
        mp[pre[j]]++;
       
    }
    

    return cnt;

        
    }
};