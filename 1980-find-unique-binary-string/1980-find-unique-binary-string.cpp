class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<int>set;

        for(auto &u:nums)
        {
            set.insert(stoi(u,0,2));
        }        


        int n=nums.size();

        string ans="";
        for(int i=0; i<=n; i++)
        {
            if(set.find(i) == set.end())
            {
                ans=bitset<16>(i).to_string();
                return ans.substr(16-n,n);
            }
        }

        return "";
    }
};