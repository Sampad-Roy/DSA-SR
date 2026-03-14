class Solution {
public: 
     
    bool check(long long mid,vector<int>&w,int mh)
    {
        long long h=0;
        for(auto u:w)
        {
          h+=(long long) (( sqrt ( ( 2.0 * mid) / u + 0.25 ) ) - 0.5);
          if(h>=mh) return true;
        }

        return h>=mh;


    }


    long long minNumberOfSeconds(int MH, vector<int>& workerTimes) { 

        int n=workerTimes.size();
        int mx=*max_element(workerTimes.begin(),workerTimes.end());
        long long l=1;
        long long r=(long long) 1LL*mx*((1LL*MH*(MH+1))/2);
        long long result=0;
        while(l<=r)
        {
          
          long long mid=l+(r-l)/2;
          if(check(mid,workerTimes,MH))
          {
            result=mid;
            r=mid-1;
          }
          else
          {
            l=mid+1;
          }
        }

        return result;

        
    }
};