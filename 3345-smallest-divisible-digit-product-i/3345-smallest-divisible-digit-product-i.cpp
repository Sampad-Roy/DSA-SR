class Solution {
public:
    int smallestNumber(int n, int t) {
        bool f=1;
        int ans=0;
        while(f)
        {   
            int temp=n;
            int sum=1;
            while(temp>0)
            {
              sum*=temp%10;
              temp/=10;
            }
            if(sum%t==0)
            {   
                ans=n;
                f=0;
                break;
            }
            else
            {
                if(sum>n) n--;
                else n++;
            }

        }

        return ans;
        
    }
};