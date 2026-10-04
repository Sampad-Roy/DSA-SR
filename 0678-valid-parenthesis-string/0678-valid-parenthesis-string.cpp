class Solution {
public:
    bool checkValidString(string s) {
       int mn = 0, mx = 0;

       for (char c : s) {
        if (c == '(') {
            mn++;
            mx++;
        } else if (c == ')') {
            mn--;
            mx--;
        } else { 
            mn--;
            mx++;
        }

        if (mx < 0) return false; 

        mn = max(mn, 0); 
    }

     return mn == 0; 
        
    }
};