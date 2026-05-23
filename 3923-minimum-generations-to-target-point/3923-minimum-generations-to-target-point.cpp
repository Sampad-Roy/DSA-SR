class Solution {
public:
   struct VectorHash
    {
        size_t operator()(const vector<int>& v) const
        {
            size_t h = 0;

            for (int x : v)
            {
                h ^= hash<int>()(x) + 0x9e3779b9 + (h << 6) + (h >> 2);
            }

            return h;
        }
    };

    int minGenerations(vector<vector<int>>& points, vector<int>& target) {
    

    int n=points.size();
    unordered_set<vector<int>, VectorHash> all;
    for(int i=0; i<n; i++)
    {
        if(points[i]==target)
        {
            return 0;
        }
        all.insert(points[i]);
    }

    int gen=1;
    while(1)
    {
        

        vector<vector<int>>curr(all.begin(),all.end());
        vector<vector<int>>neww;

        int m=curr.size();
        
        for(int i=0; i<m-1; i++)
        {
            for(int j=i+1; j<m; j++)
            {
                vector<int>a=curr[i];
                vector<int>b=curr[j];

                vector<int>c={
                (a[0]+b[0])/2,
                (a[1]+b[1])/2,
                (a[2]+b[2])/2 
                };


                if(!all.count(c))
                {
                    if(c==target)
                    {
                       return gen;
                    }
                    neww.push_back(c);
                }
            }
            
        }


        if(neww.empty()) break;

        for(auto &u:neww)
        {
           all.insert(u);
        }

        gen++;


    }


   return -1;



        
    }
};