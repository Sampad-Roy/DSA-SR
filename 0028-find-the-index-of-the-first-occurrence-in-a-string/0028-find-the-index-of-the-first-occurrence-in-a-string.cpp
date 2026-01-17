class Solution {
public:
    int strStr(string haystack, string needle) {


       if(haystack.find(needle)!= -1)
       {
           for(int i=0; i<haystack.size(); i++)
           {
              char x=needle[0];
              if(haystack[i]==x)
              {
                 return i;
              }

           }

       }

       return -1;
    }
};