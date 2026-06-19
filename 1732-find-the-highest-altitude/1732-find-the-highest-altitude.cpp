class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      
        int n=gain.size();
        int cnt=0;
        int ans=INT_MIN;
        for(int i=0; i<n; i++)
        {
            cnt+=gain[i];
            ans=max(cnt,ans);
        }

        if(ans<0) return 0;
        else return ans;

    }
};