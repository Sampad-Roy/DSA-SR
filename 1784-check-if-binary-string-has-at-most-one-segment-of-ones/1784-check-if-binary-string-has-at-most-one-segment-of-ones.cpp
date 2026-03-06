class Solution {
public:
    bool checkOnesSegment(string s) {

      int n=s.size();
      int i=0;
      int cnt=0;
      while(i<n)
      {
           if(s[i]=='1')
           {
            cnt++;
            while(s[i]=='1' && i<n)
            {
                i++;
            }
           }
           else
           {
            i++;
           }
      }

      if(cnt>1) return false;
      else return true;
        
    }
};