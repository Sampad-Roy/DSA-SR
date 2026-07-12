class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {


       map<int,int>mp;
       for(int i=0; i<arr.size(); i++)
       {
        mp[arr[i]]++;
       }
       int rank=1;
       for(auto &u:mp)
       {
         u.second=rank;
         rank++;
       }


       for(int i=0; i<arr.size(); i++)
       {
          arr[i]=mp[arr[i]];
       }

        return arr;
        
    }
};