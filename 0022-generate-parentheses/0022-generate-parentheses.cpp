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


   void solve(string &cur,int n)
   {
      
    if(cur.length()==2*n)
    {
        if(isvalid(cur))
        {
            result.push_back(cur);
        }
        return;
    }
     

     cur.push_back('(');
     solve(cur,n);
     cur.pop_back();

     cur.push_back(')');
     solve(cur,n);
     cur.pop_back();


   }


    vector<string> generateParenthesis(int n) {
    

    string s;
    solve(s,n);


    return result;

    }


};