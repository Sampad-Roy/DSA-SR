class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {


        vector<int>a(2,0);
        
        for(auto u:events)
        {
            if(a[1]==10) break;
            
            
            if(u=="0") a[0]+=0;
            else if(u=="1") a[0]+=1;
            else if(u=="2") a[0]+=2;
            else if(u=="3") a[0]+=3;
            else if(u=="4") a[0]+=4;
            else if(u=="6") a[0]+=6;
            else if(u=="W") a[1]+=1;
            else if(u=="WD") a[0]+=1;
            else a[0]+=1;
        }

        return a;

        
    }
};