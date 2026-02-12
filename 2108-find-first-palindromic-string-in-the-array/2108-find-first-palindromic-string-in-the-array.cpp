class Solution {
public:
   

     bool p(string a)
        {
            int i=0; 
            int j=a.size()-1;

            while(i<j)
            {
                if(a[i]!=a[j])
                {
                    return false;
                }
                i++,j--;
            }

            return true;
        }

    string firstPalindrome(vector<string>& words) {
       
     for(auto &u:words)
     {
        if(p(u))
        {
            return u;
        }
     }

     return  "";


    }
};