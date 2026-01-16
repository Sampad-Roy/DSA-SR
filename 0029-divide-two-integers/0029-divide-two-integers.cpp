class Solution {
public:
    int divide(int x, int y) {
        int sign=1;
        if(x<0 && y<0)
        {
            sign=1;
        }
        if(x<0 && y>0)
        {
            sign=-1;
        }
        if(x>0 && y<0)
        {
            sign=-1;
        }

       if(x==0)
       {
        return 0;
       }
       if(y==0) return INT_MAX;
       if(x == INT_MIN && y == -1)
       return INT_MAX; 


       
       long long a = llabs((long long)x);
       long long b = llabs((long long)y);
       

        long long ans=0;
        while(a>=b)
        {
           long long temp=b;
           long long mul=1;

           while(a>=(temp<<1))
           {
             temp<<=1;
             mul<<=1;
           }

           a-=temp;
           ans+=mul;
        }

        if(sign==-1)
        {
            return -ans;
        }
        else
        {
            return ans;
        }

    }
};