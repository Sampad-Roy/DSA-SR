class Solution {
public:
    vector<string> buildArray(vector<int>&a, int n) { 

     vector<string>ans;
     int j=0;
     for(int i=1; i<=n; i++)
     {
        

        if(j<a.size() && i==a[j])
        {
            ans.push_back("Push");
            j++;

            if(j>=a.size())
            {
                break;
            }
        }
        else
        {   
            ans.push_back("Push");
            ans.push_back("Pop");
        }
     }


     return ans;

        
    }
};