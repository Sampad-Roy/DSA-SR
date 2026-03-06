class Solution {
public:
    bool checkOnesSegment(string s) {
         string a="01";
         if(s.find(a)!=-1) return false;
         else return true;
    }
};