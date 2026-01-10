class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int n=a.size();
        int srt=0;
        int end=n-1;
        if(n==1 || n==2) return a[0];
        while(srt<=end)
        {
          int mid=(srt+end)/2;
          if(a[mid]!=a[mid-1] && a[mid]!=a[mid+1])
          {
            return a[mid];
          }


          if(mid%2==0)
          {

             if(a[mid]==a[mid-1])
             {
                end=mid-1;
             }
             else
             {
                srt=mid+1;
             }


          }
          else
          {

            if(a[mid]==a[mid-1])
            {
              srt=mid+1;
            }
            else
            {
                end=mid-1;
            }

          }



        }
        return 0;
    }
};