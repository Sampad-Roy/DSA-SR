class Solution {
public:
    int maxArea(vector<int>& height) { 
        int ans=0,w,h;
        int n = height.size();
        int i=0,j=n-1; 
        while(i<j)
        {
           h=min(height[i],height[j]);
           w=j-i;
           int area=w*h;
           ans=max(ans,area);
           if(height[i]<height[j])
           {
            i++;
           }
           else
           {
            j--;
           }


        } 

        return ans;
        
    }
};