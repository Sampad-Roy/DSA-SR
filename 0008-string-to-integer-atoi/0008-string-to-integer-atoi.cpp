class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        int sign=1;
        long long ans=0;
        int i=0;
        while(i<n && s[i]==' ')
        {
            i++;
        }

        if(s[i]=='-' || s[i]=='+')
        {
            if(s[i]=='-')
            {
            sign=-1;
            }
            i++;
        }

       while(i<n && s[i]>='0' && s[i]<='9')
       {
        ans=ans*10 + (s[i]-'0');
        if(ans*sign>=INT_MAX) return INT_MAX;
        if(ans*sign<=INT_MIN) return INT_MIN;
        i++;
       }

       return ans*sign;
    }
};