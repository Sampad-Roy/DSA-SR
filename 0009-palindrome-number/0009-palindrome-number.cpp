class Solution {
public:
    bool isPalindrome(int x) { 

        string a=to_string(x);
        std::reverse(a.begin(),a.end());
        int b=stoll(a);
        if(x==b)
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
    }
};