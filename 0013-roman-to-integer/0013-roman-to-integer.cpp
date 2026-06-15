class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char,int>mp={
           {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };

        long long ans=0;
        for(int i=s.size()-1; i>=0; i--)
        { 
          int curr=mp[s[i]];
          int next=0;
          if(i-1>=0)
          {
            next=mp[s[i-1]];
          }
          if(next<curr && i-1>=0)
          {
            ans+=(mp[s[i]]-mp[s[i-1]]);
            i--;
          }
          else
          {
            ans+=mp[s[i]];
          }

        }

        return ans;
        
    }
};