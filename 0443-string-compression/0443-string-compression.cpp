class Solution {
public:
    int compress(vector<char>& chars) { 
     
     int size=chars.size();
     int idx=0;
     for(int i=0; i<size; i++)
     {
        int cnt=0;
        char ch=chars[i];
        while(i<size && ch==chars[i])
        {
            cnt++;
            i++;
        }

        if(cnt==1)
        {
          chars[idx]=ch;
          idx++;
        }
        if(cnt>1)
        {
          string s=to_string(cnt);
          chars[idx]=ch;
          idx++;
          for(auto u:s)
          {
            chars[idx]=u;
            idx++;
          }
        }
        i--;
     }

     return idx;

    }
};