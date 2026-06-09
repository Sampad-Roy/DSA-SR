class Solution {
public:
   typedef long long ll;

    long long maxTotalValue(vector<int>& nums, int k) {

        ll mxx = *max_element(nums.begin(),nums.end());
        ll mnn = *min_element(nums.begin(),nums.end());

        ll x=abs(mxx-mnn);

        return 1LL*(x*k);


        
        
    }
};