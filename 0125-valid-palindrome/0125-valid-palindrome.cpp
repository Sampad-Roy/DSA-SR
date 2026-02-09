class Solution {
public:
    bool isPalindrome(string s) {

        string a;
        for(auto &u:s)
        {
            if(isalpha(u) || (u>='0' && u<='9'))
            {
                a+=tolower(u);
            }
        }
       
        string temp=a;
        reverse(a.begin(),a.end());
        for(int i=0; i<temp.size(); i++)
        {
            if(temp[i]!=a[i])
            {
                return false;
            }
        }

        return true;
        
    }
};