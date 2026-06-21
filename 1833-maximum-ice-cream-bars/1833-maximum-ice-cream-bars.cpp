class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

        int x=0;
        int cnt=0;
        sort(begin(costs),end(costs));
        int i=0;
        while(x<=coins && i<costs.size())
        {
           x+=costs[i];
           if(x<=coins)
           {
            cnt++;
           }
           i++;
        }

        return cnt;
        
    }
};