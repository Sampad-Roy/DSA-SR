class Solution {
public:
    int totalNumbers(vector<int>& d) {

         unordered_set<int>st;
         int n=d.size();

         for(int i=0; i<n; i++)
         {
            for(int j=0; j<n; j++)
            {
                for(int k=0; k<n; k++)
                {

                    if(i==j || j==k || i==k || d[i]==0)
                    {
                        continue;
                    }

                    int num=(d[i]*100)+(d[j]*10)+d[k];

                    if(num%2!=0) continue;

                    st.insert(num);
                }
            }
         }

         return st.size();

         
         
    }
};