class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int cnt_0=0,cnt_1=0,cnt_2=0;

        for(auto u:stones)
        {
            if(u%3==0)
            {
                cnt_0++;
            }
            else if(u%3==1)
            {
                cnt_1++;
            }
            else
            {
                cnt_2++;
            }
        }

        if(cnt_0%2==0)
        {
             return ((cnt_1>=1 && cnt_2>=1) && (cnt_1>cnt_2 || cnt_2>=cnt_1));
        }
        return abs(cnt_1-cnt_2)>=3;
        
    }
};