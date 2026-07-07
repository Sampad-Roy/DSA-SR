class Solution {
public:
    typedef long long ll;
    long long sumAndMultiply(int n) {
        

        ll sum=0;
        //set<int>st;
        ll num=0;
        string s=to_string(n);
        for(auto u:s)
        {
          sum+=(u-'0');
          //st.insert(u-'0');
          if(u!='0') num=(num*10)+(u-'0');

        }
    
        return (ll)num*sum;
       
        
    }
};