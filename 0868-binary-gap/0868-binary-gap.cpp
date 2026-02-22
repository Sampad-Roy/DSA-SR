class Solution {
public:
    int binaryGap(int n) {
        int result=0;
        int curr=0,pre=-1;
        while(n>0)
        {
           if((n&1)>0)
           {
              if(pre!=-1)
              {
                 result=max(result,curr-pre);
              }
              pre=curr;
           }

           curr++;
           n>>=1;
        }

        return result;
    }
};