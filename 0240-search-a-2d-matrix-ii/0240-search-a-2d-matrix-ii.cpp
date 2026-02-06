class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {


        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0; i<n; i++)
        {
            int srt=0,end=m-1;
            while(srt<=end)
            {

                int mid=srt+(end-srt)/2;
                if(matrix[i][mid]==target)
                {
                    return true;
                }

                if(matrix[i][mid] > target)
                {
                    end=mid-1;
                }
                else
                {
                    srt=mid+1;
                }


            }

        }
        return false;



        
    }
};