class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n=a.size();
        if(n==1) return 0;
        int srt=0;
        int end=n-1;
        while(srt<=end)
        {
            int mid=(srt+end)/2;
            if(mid==0) 
            {
                if(a[mid]>a[mid+1]) return mid;
                else srt=mid+1;
            }
            else if(mid==a.size()-1)
            {
                if(a[mid]>a[mid-1]) return mid;
                else
                {
                    end=mid-1;
                }
            }
            else if(a[mid]>a[mid+1] && a[mid]>a[mid-1])
            {
                return mid;
            }
            else
            {
                if(a[mid]>a[mid-1]) 
                {
                   srt=mid+1;
                }
                else
                {
                    end=mid;
                }
            }

        }
        return 0;
    }
};