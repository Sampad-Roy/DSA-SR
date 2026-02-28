class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int>s1,s2;
        int n=h.size();
        vector<int>right,left;
        
        for(int i=n-1; i>=0; i--)
        {
         while(s1.size()>0 && h[s1.top()]>=h[i])
         {
           s1.pop();
         }

         if(s1.empty())
         {
            right.push_back(n);
         }
         else
         {
            right.push_back(s1.top());
         }

         s1.push(i);

        }
        reverse(right.begin(),right.end());

        for(int i=0; i<n; i++)
        {
          while(s2.size()>0 && h[s2.top()]>=h[i])
          {
            s2.pop();
          }

          if(s2.empty())
          {
            left.push_back(-1);
          }
          else
          {
            left.push_back(s2.top());
          }

          s2.push(i);
        }


        int mx=0;
        for(int i=0; i<n; i++)
        {   
            int w=(right[i]-left[i])-1;
            int area=h[i]*w;
            mx=max(mx,area); 
        }
       

       return mx;

    
        
    }
};