class Solution {
public:
   vector<int>t;
   int solve(vector<int>&stone,int i)
   {    
        int n=stone.size(); 
        if(i>=n) return 0;

        if(t[i]!=-1) return t[i];        

        int res=stone[i]-solve(stone,i+1);

        if(i+1<n) res=max(res,stone[i]+stone[i+1]-solve(stone,i+2));

        if(i+2<n) res=max(res,stone[i]+stone[i+1]+stone[i+2]-solve(stone,i+3));


        return t[i]=res;



   }

    string stoneGameIII(vector<int>& stone) {

        int n=stone.size();
        t.resize(n+1,-1);
        int diff=solve(stone,0);

        if(diff<0)
        {
            return "Bob";
        }
        else if(diff>0)
        {
            return "Alice";
        }
        
        return "Tie";
        
    }
};