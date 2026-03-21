class Solution {
public:
    bool isPalindrome(string s) {
        string temp;


        for(auto u:s)
        {
            if((u>='a' && u<='z') || (u>='A' && u<='Z') || (u>='0' && u<='9'))
            {
                temp+=tolower(u);
            }
        }
        string temp1=temp;
        reverse(temp.begin(),temp.end());
        if(temp1==temp)
        {
            return true;
        }
        else 
        {
            return false;
        }


    }
};