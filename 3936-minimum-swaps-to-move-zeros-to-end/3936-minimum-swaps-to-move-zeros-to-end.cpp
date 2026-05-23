class Solution {
public:
    int minimumSwaps(vector<int>&a) {
        
     int n=a.size();
     int end=n-1;
     int cnt=0;
     for(int i=0; i<n; i++)
     {
       if(a[i]==0)
       {
        while(end>i && a[end]==0)
        {
            end--;
        }

        if(end>i)
        {
          swap(a[i],a[end]);
          end--;
          cnt++;
        }
       }
     }

     return cnt;

    }
};