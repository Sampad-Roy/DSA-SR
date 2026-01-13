class Solution {
public:
    bool isPalindrome(int x) { 
        
        if(x<0)
        {
            return false;
        }
        else
        {
          long long ans=0;
          int test=x;
          while(x>0)
          { 
            if(ans>=INT_MAX/10)
            {
                if(ans==x) return true;
                else return false;
            }
            if(ans<=INT_MIN/10) 
            {
                if(ans==x) return true;
                else return false;
            }
            ans=ans*10 +(x%10);
            x/=10;
          }
          if(ans==test) return true;
          else return false;     
          
        }
       
        
        
    }
};