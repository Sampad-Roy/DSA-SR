class Solution {
public:


    int mod=1e9+7;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& q) {

        // joy sree ram


        int n=s.size();

        // I need to find x => it is non zero element
        // sum up tp query --> ok
        // then Mul.

        //Step 1

        // I can use pre sum :))

        vector<int>pre(n,0);

        pre[0]=s[0]-'0';

        for(int i=1; i<n; i++)
        {
            pre[i]=pre[i-1]+(s[i]-'0');
        }
        
        // 1 2 3 4 5 
        // 1 3 6 10 15

        // [3,5] => pre[5] - pre[3-1] => 15-3 = 12 //ok
        

        int sum=0;

        //now x;

       vector<int>nonzero(n,0);

       // 10203004
       // {1,1,}                 pre*10+num= 1*10+2=12
       nonzero[0]=s[0]-'0';
       for(int i=1; i<n; i++)
       {  
          int test=s[i]-'0'; 
          if(test!=0)
          {
            nonzero[i]=((1LL*nonzero[i-1]*10)+test)%mod;
          }
          else
          {
            nonzero[i]=nonzero[i-1];
          }
       }

       // 01234567
       // 102 |0| 0 3 |0| 4
       // 1 1 | 12 | 12 123 | 123 | 123 1234
       //let test -> Sampad geting Confused -_-!!

       // (3,6) => 3
       
       vector<int>zero_up(n);
       int cnt=0;
       for(int i=0; i<n; i++)
       {
        if(s[i]!='0')
        {
            cnt++;
        }
        zero_up[i]=cnt;
       }

       vector<int>ten(n+1);

       ten[0]=1;
       for(int i=1; i<=n; i++)
       {  
          ten[i]=((1LL*ten[i-1]*10)%mod);
       }

       vector<int>ans;

       for(auto u:q)
       {

        int l=u[0];
        int r=u[1];
        
        int x=1,sum=1;
        if(l==0)
        {
            x=nonzero[r];
            sum=pre[r];
        }
        else
        {   
            int len=zero_up[r]-zero_up[l-1];
           
            x = (nonzero[r] - (1LL * nonzero[l-1] * ten[len]) % mod + mod) % mod;
            sum=pre[r]-pre[l-1];
        }


        ans.push_back((1LL*x*sum)%mod);

        //1 2 3 4 5
        // 1 3 6 10 15
        // 3 5 => 15-3=12

       }
    

    return ans;


 
        
    }
};