class Solution {
public:
    int mySqrt(int x) {  
        int n=x;
        if(n<2) return n;
        int l=1,r=n/2;
        int ans=0;
        while(l<=r)
        {
           int mid=(l+r)/2;
           long long s=(1LL*mid*mid);
           if(s==x) return mid;
           else if(s<n) 
           { 
            ans=mid;
            l=mid+1;
           }
           else 
           {
            r=mid-1;
           }

        }
       return ans;
    }
};