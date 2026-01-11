class Solution {
public:
    double myPow(double x, int n) {    
        long B=n;
        double ans=1;
        if(n<0)
        {
            x=1/x;
            B=-B;
        }

        if(n==0) return 1.0;
        if(n==1) return x;
        if(x==0) return 0.0;

        if(x==-1)
        {
            if(n%2==0) return 1.0;
            else return -1.0;
        }
        while(B>0)
        {
           if(B%2==1)
           {
            ans*=x;
           }
           x*=x;
           B/=2;
        }

        return ans;
        
    }
};