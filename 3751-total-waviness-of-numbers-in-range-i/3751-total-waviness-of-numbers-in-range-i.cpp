class Solution {
public:
    int totalWaviness(int nums1, int nums2) {
    
    int Range=nums2-nums1;
    
    int cnt=0;
    while(nums1<=nums2)
    {
      string s="";
      s=to_string(nums1);

      for(int i=1; i<s.size()-1; i++)
      {
            if(s[i]>s[i+1] && s[i]>s[i-1])
            {
                cnt++;
            }
            else if(s[i]<s[i+1] && s[i]<s[i-1])
            {
                cnt++;
            }     
      }  

      nums1++;
      

    }


    return cnt;



        
    }
};