class Solution {
public:
    string smallestPalindrome(string s) {
        

        int n=s.size();
        int freq[26]={};

        for(auto u:s)
        {
            freq[u-'a']++;
        }
        string left="";
        string mid="";
        for(int i=0; i<26; i++)
        {
           left+=string(freq[i]/2,char(i+'a'));


           if(freq[i]%2==1)
           {
            mid=(i+'a');
           }

        }


        string right=left;

        reverse(begin(right),end(right));

        return left+mid+right;

    }
};