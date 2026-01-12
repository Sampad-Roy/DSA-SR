class Solution {
public:
    int reverse(int x) {
        int n=x;

        string a=to_string(x);
        long long b;

        if(n>0)
        {
           std::reverse(a.begin(),a.end());
        }
        else
        {

           std::reverse(a.begin()+1,a.end());  
        }

        b = stoll(a);

        if(b>INT_MAX || b<INT_MIN) return 0;
        else return (int)b;

        
    }
};