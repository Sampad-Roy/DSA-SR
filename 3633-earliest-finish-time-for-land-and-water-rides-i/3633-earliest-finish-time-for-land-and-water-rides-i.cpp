class Solution {
public:
    int solve(int n, int m,vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration)
    {
      int x=INT_MAX;
      for(int i=0; i<n; i++)
      {
        x=min(x,landStartTime[i]+landDuration[i]);
      }
      int y=INT_MAX;
      for(int i=0; i<m; i++)
      {
        int srt=max(x,waterStartTime[i]);
        y=min(y,srt+waterDuration[i]);
      }
      return y;

    }



    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {

        int n=landStartTime.size();
        int m=waterStartTime.size();

        //l->w
        int x=solve(n,m,landStartTime,landDuration,waterStartTime,waterDuration);
        
        //w->l

        int y=solve(m,n,waterStartTime,waterDuration,landStartTime,landDuration);

        return min(x,y);
        
    }
};