class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>&a) {

        int n=a.size();
        auto mantra= [] (vector<int>&x,vector<int>&y)
        {
                if(x[0]==y[0])
                {
                    return x[1]>y[1];
                }         
                else
                {
                    return x[0]<y[0];
                }
        };

        sort(begin(a),end(a),mantra);

        vector<vector<int>>result;

        result.push_back(a[0]);

        for(int i=1; i<n; i++)
        {
            if(result.back()[0]<=a[i][0] && result.back()[1]>=a[i][1])
            {
                continue;
            }
            else
            {
                result.push_back(a[i]);
            }
        }

        return result.size();

    }
};