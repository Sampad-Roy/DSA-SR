class Solution {
public:
    int maxBuilding(int n1, vector<vector<int>>& restrictions) {
       
       //Kichui nai

       if(restrictions.size()<=0)
       {
        return n1-1;
       }
       
       
       
        restrictions.push_back({1,0});
        restrictions.push_back({n1,n1-1});
        

        sort(begin(restrictions),end(restrictions));

        int n=restrictions.size();

        for(int i=1; i<n; i++)
        {
            int diff=restrictions[i][0]-restrictions[i-1][0];

            restrictions[i][1]=min(restrictions[i][1],restrictions[i-1][1]+diff);
        }

        for(int i=n-2; i>=0; i--)
        {
            int diff=restrictions[i+1][0]-restrictions[i][0];

            restrictions[i][1]=min(restrictions[i][1],restrictions[i+1][1]+diff);

        }


        int ans=0;

        for(int i=1; i<n; i++)
        {
            int X1=restrictions[i-1][0];
            int Y1=restrictions[i-1][1];
            

            int X2=restrictions[i][0];
            int Y2=restrictions[i][1];

            int d=X2-X1;
            int d1=abs(Y1-Y2);



            int peak=max(Y1,Y2)+(d-d1)/2;
            ans=max(ans,peak);
        }



        return ans;

    }
};