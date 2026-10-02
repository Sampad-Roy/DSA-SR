class Solution {
public:
   vector<string>result;
    bool isvalid(string &curr)
    {
       stack<char>st;
       for(auto u:curr)
       {
        if(u=='(')
        {
            st.push('(');
        }
        else
        {   
            if(st.empty()) 
            {
                return false;
            }
            st.pop();
        }
       }

       return st.empty();


    }



    void solve(string &curr,int n)
    {  
      
       if(curr.size()>2*n) return;
       
       if(curr.size()==2*n)
       {
        if(isvalid(curr))
        {
            result.push_back(curr);
            return;
        }
       }


       curr.push_back('(');
       solve(curr,n);
       curr.pop_back();


       curr.push_back(')');
       solve(curr,n);
       curr.pop_back();
    }



    vector<string> generateParenthesis(int n) {
        string curr;
        solve(curr,n);

        return result;
    }
};