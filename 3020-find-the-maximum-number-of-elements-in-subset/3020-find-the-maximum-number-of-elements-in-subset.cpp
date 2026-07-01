class Solution {
public:
    int maximumLength(vector<int>& nums) {

       int n=nums.size();
       unordered_map<long,long>mp;

       for(auto u:nums)
       {
        mp[u]++;
       }

       int ans=1;
       if(mp.count(1))
       {
        int x=mp[1];
        if(x%2==1)
        {
            ans=max(ans,x);
        }
        else
        {
            ans=max(ans,x-1);
        }

       }

       for(int i=0; i<n; i++)
       { 
         int len=0;
         long long freq=nums[i];

         if(freq==1) continue;

         while(mp.count(freq))
         {
            if(mp[freq]>=2)
            {
                len+=2;
                freq=freq*freq;
            }
            else
            {
                len++;
                break;
            }
         }

         if(len%2==0)
         {
            len--;
         }


         ans=max(ans,len);

       }

       return ans;

      
    }
};