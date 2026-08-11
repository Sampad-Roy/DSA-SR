class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {

        int n1=arr1.size();
        int n2=arr2.size();

        unordered_set<string>s;
        int mxx=0;

        for(int i=0; i<n1; i++)
        {   
            string s1=to_string(arr1[i]);
            string x="";
            for(auto u:s1)
            {
                x+=u;
                s.insert(x);
            }
        }

      
        for(auto u:arr2)
        {
             string s2=to_string(u);
             string y="";
             for(auto u:s2)
             {  
                y+=u;
                if(s.find(y) != s.end())
                {
                 mxx=max(mxx,(int)y.size()); 
                }
             }
        }

        return mxx;
    }
};