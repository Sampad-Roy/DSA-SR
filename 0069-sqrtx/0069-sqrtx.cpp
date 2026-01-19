class Solution 
{
public:
    int mySqrt(int x) 
    {
        int i = 1, cnt = 0;
        while(x > 0)
        {
            x -= i;     
            i += 2;    
            cnt++;
        }
        return x < 0 ? cnt - 1 : cnt;
    }
};