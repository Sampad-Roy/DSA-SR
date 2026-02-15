class Solution {
public:
    bool check(int fre[],int fre2[])
    {

      for(int i=0; i<26; i++)
      {
        if(fre[i]!=fre2[i])
        {
            return false;
        }
      }

      return true;
    }


    bool checkInclusion(string s1, string s2) {

       int fre[26]={0};
       for(auto u:s1)
       {
        fre[u-'a']++;
       }
       int r=0;
       int n=s2.size();
       int win_size=s1.size();
       while(r<n)
       {
          int win_fre[26]={0};
          int win_idx=0,idx=r;
          
          while(win_idx<win_size && idx<n)
          {
            win_fre[s2[idx]-'a']++;
            idx++,win_idx++;
          }

          if(check(fre,win_fre))
          {
            return true;
          }

          r++;

        
       }
       
       return false;

        
    }
};