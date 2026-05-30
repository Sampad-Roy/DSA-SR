class Solution {
public:
   bool valid(int fre1[],int fre2[])
   {
      for(int i=0; i<26; i++)
      {
        if(fre1[i]!=fre2[i])
        {
            return false;
        }
      }

      return true;


   }

    bool checkInclusion(string s1, string s2) {


       int n1=s1.size();
       int n2=s2.size();
       
       int fre1[26]={0};

       for(int i=0; i<n1; i++)
       {
          fre1[s1[i]-'a']++;
       }

       for(int i=0; i<n2; i++)
       { 
         int fre2[26]={0};
         int window=0,idx=i;
         while(window<n1 && idx<n2)
         {
            fre2[s2[idx]-'a']++;
            window++,idx++;
         }
         
         if(valid(fre1,fre2))
         {
            return true;
         }

       }
       return false;


        
    }
};