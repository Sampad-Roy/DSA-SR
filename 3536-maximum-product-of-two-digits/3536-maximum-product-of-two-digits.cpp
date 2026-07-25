class Solution {
public:
    int maxProduct(int n) {

        unordered_map<int,int>mp;
        string s="";
        while(n>0)
        {
           int x=n%10;
           mp[x]++;

           if(mp[x]<=2)
           {
            s+=char(x+'0');
           }

           n/=10;
        }


        sort(rbegin(s),rend(s));

        return int((s[0]-'0')*(s[1]-'0'));

       
        

        
    }
};