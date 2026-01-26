class Solution {
public:
    int longestNiceSubarray(vector<int>&a) { 
    int n=a.size();


    int l=0,mxlen=0;
    int ans=0;
    for(int r=0; r<n; r++)
    {
        while((ans&a[r])!=0)
        {
            ans^=a[l];
            l++;
        }
    
        ans|=a[r];
        mxlen=max(mxlen,r-l+1);
    }

    return mxlen;
  }

};