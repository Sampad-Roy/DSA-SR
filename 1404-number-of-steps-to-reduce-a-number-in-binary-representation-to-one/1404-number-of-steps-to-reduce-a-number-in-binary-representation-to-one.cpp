class Solution {
public:
    int numSteps(string s) {
        int n=s.size();
        long long num=0;
        long long b=1;
        for(int i=0; i<n; i++)
        {
            num+=(s[n-i-1]-'0')*b;
            b*=2;
        }
        long long  cnt=0;        

        while(num!=1)
        {
           if(num%2==0)
           {
            num/=2;
            cnt++;
           }
           else
           {
            num+=1;
            cnt++;
           }
        }


        return cnt;
        
        
        
    }
};