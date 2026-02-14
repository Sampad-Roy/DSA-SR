class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=s.size();
        while(s.size()>0 && s.find(part)<s.size())
        {

            s.erase(s.find(part),part.size());

        }

        return s;
        
    }
};