class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        unordered_set<int>s;

        for(auto u:nums)
        {
            s.insert(u);
        }
        int m=k;
        while(1)
        {
            if(s.find(m)==s.end())
            {
                return m;
            }
            
            m+=k;
        }
        
    }
};