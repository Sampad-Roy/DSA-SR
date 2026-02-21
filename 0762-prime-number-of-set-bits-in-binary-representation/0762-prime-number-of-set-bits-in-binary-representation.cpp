class Solution {
public:
    int countPrimeSetBits(int left, int right) { 

        int ans=0;
        while(left<=right)
        { 
          int cnt=0;
          int temp=left;
          while(temp>0)
          {
             if(temp%2==1)
             {
                cnt++;
             }
             temp/=2;
          }
          if(cnt>1)
          {
            int f=1;
            for(int i=2; i*i<=cnt; i++)
            {
                if(cnt%i==0)
                {
                    f=0;
                    break;
                }
            }
            if(f) ans++;

          }

          left++;


        }
        return ans;
        
    }
};