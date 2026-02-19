class Solution {
public:
    int trap(vector<int>&h) {
        int n=h.size();
        vector<int>l_h(n,0);
        vector<int>r_h(n,0);
        l_h[0]=h[0];
        for(int i=1; i<n; i++)
        {
            l_h[i]=max(l_h[i-1],h[i]);
        }

        r_h[n-1]=h[n-1];
        for(int i=n-2; i>=0; i--)
        {
            r_h[i]=max(r_h[i+1],h[i]);
        }

        int total=0;
        for(int i=0; i<n; i++)
        { 
            total+=min(r_h[i],l_h[i])-h[i];
        }

        return total;
  
        
        
    }
};