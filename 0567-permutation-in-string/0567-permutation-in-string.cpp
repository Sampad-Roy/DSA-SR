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

        int n1=s1.size();
        int n2=s2.size();
        int fre[26]={0};
        for(int i=0; i<n1; i++)
        {
            fre[s1[i]-'a']++;
        }
    
        for(int i=0; i<n2; i++)
        {  
           int fre2[26]={0}; 
           int winidx=0,idx=i;
           while(winidx<n1 && idx<n2)
           {
            fre2[s2[idx]-'a']++;
            winidx++,idx++;
           }


           if(check(fre,fre2))
           {
             return true;
           }

        }
        return false;
        
    }
};