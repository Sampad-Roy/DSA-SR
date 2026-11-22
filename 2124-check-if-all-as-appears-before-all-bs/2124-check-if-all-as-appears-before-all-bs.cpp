class Solution {
public:
    bool checkString(string s) {

       if(is_sorted(begin(s),end(s)))
       {
        return true;
       }
       
       return false;

        
    }
};


