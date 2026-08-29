class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {

        int n=nums.size();

        vector<int>vec=nums;

        sort(begin(vec),end(vec));

        int group=0;
        unordered_map<int,int>num_group;
        num_group[vec[0]]=group;


        unordered_map<int,deque<int>>a;
        a[group].push_back(vec[0]);

        for(int i=1; i<n; i++)
        {
            if(abs(vec[i]-vec[i-1])>limit)
            {
                group++;
            }

            num_group[vec[i]]=group;
            a[group].push_back(vec[i]);
        }

        // build

        vector<int>result(n);

        for(int i=0; i<n; i++)
        {
             int num=nums[i];
             int g=num_group[num];

             result[i]=a[g].front();
             a[g].pop_front();
        }


        return result;


        
    }
};