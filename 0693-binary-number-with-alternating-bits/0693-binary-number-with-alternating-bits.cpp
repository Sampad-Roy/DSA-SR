class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int>a;
        while(n>0)
        {
           a.push_back(n%2);
           n/=2;
        }

        for(int i=0; i<a.size()-1; i++)
        {
            if(a[i]==a[i+1])
            {
                return false;
            }
        }

        return true;


    }
};