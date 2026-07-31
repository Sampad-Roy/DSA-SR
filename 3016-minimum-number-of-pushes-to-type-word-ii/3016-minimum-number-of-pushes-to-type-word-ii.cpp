class Solution {
public:
    int minimumPushes(string word) {


      
        vector<int>fre(26,0);

        for(auto u:word) fre[u-'a']++;

        sort(begin(fre),end(fre),greater<int>());

        int ans=0;

        for(int i=0; i<26; i++)
        {  
           if(fre[i]==0) break;          
           ans+=fre[i]*((i/8)+1);
        }


        return ans;
        
    }
};