class Solution {
public:
    vector<vector<int>> fourSum(vector<int>&a, int target) {  

        int n=a.size();
        vector<vector<int>>ans;
        sort(a.begin(),a.end());
        for(int i=0; i<n; i++)
        {  

            if(i>0 && a[i]==a[i-1]) 
            {
                continue;
            }

            for(int j=i+1; j<n; )
            {
                int p=j+1,k=n-1;
               
                while(p<k)
                {
                    long long sum=(long long)a[i]+a[j]+a[p]+a[k];
                    if(sum<target) p++;
                    else if(sum>target) k--;
                    else
                    {
                        ans.push_back({a[i],a[j],a[p],a[k]});
                        p++,k--; 
                        while(p<k && a[p]==a[p-1]) p++;
                       // while(p<k && a[k]==a[k-1]) k--;
                    } 
                    
                }
                j++;
                while(j<n && a[j]==a[j-1])
                {
                    j++;
                }
            }
        }
        return ans;
        
    }
};