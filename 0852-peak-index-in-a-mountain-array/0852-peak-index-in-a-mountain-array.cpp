class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        
          int n=a.size();
          int srt=0;
          int end=n-1;

          while(srt<=end)

          {
            int mid=(srt+end)/2;

            if(a[mid]>a[mid+1] && a[mid]>a[mid-1])
            {
                return mid;
            }
           
          if(a[mid]>a[mid-1])
          {
            srt=mid+1;
          }
          else
          {
            end=mid-1;
          }


          }
          return -1;


    }
};