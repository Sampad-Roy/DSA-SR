class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
    int n=grid.size();
    vector<int>l_z(n,0);

    for(int i=0; i<n; i++)
    {
        int j=n-1;
        int cnt=0;
        while(j>=0 && grid[i][j]==0)
        {
            cnt++;
            j--;
        }
        l_z[i]=cnt;
    }

    int step=0;
    for(int i=0; i<n; i++)
    {
        int need=n-i-1;
        int j=i;
        while(j<n && l_z[j]<need)
        {
            j++;
        }
        if(j==n)
        {
            return -1;
        }

       step+=(j-i);
       while(j>i)
       {
        swap(l_z[j],l_z[j-1]);
        j--;
       }
    }


    return step;              
    }
};