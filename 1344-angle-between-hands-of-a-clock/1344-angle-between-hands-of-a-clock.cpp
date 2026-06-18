class Solution {
public:
    double angleClock(int hour, int minutes) {
        double ans=INT_MAX;
        ans=abs(30*hour - 5.5*minutes);
        ans=min(ans,360-ans);
        return ans;
    }
};