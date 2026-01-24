class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) { 
         

         int n=matrix.size();
         for(int i=0; i<n; i++)
         {
            int srt=0,end=matrix[i].size()-1;
           
            while(srt<=end)
            {
                 int mid=srt+(end-srt)/2;
                 if(matrix[i][mid]==target) return true;
                 if(matrix[i][mid]<target)
                 {
                    srt=mid+1;
                 } 
                 else
                 {
                    end=mid-1;
                 }
            }
         }

         return false;
        
    }
};