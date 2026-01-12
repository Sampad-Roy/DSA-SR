class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        vector<int>s;
        for(auto &u:a)
        {
            s.push_back(u);
        }
        for(auto &u:b)
        {
            s.push_back(u);
        }
        std::sort(s.begin(),s.end());
        int n=s.size();
        if(n%2!=0)
        {
            int idx=n/2;
            return s[idx];
        }
        else
        {
            int idx=n/2;
            idx--;
            int ans=idx+1;
            float ans1=(s[idx]+s[ans])/2.00000;
            return ans1;
        }



    }
};