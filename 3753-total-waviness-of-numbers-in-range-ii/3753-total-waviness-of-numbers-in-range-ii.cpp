class Solution {
public:
   typedef long long ll;
   string s;
   int n;

   ll Dptotalnumber[16][10][10];
   ll Dptotalwave[16][10][10];

    pair<ll,ll>solve(int curr,int prepre,int pre, bool islimitV,bool islzero)
    {
          if(curr==n)
          {
            return {1,0};
          }

          if(!islimitV && !islzero && pre>=0 && prepre>=0 && curr>=0)
          {
            if(Dptotalnumber[curr][prepre][pre]!=-1 && Dptotalwave[curr][prepre][pre] != -1)
            {
               return {Dptotalnumber[curr][prepre][pre], Dptotalwave[curr][prepre][pre]};
            }
          }

          ll totalnumber=0;
          ll totalwave=0;
          int limitD;
          if(islimitV)
          {
            limitD=s[curr]-'0';
          }
          else
          {
            limitD=9;
          }

          for(int digit=0; digit<=limitD; digit++)
          {
            bool newislzero=islzero && (digit==0);

            int newprepre=pre;
            int newpre=newislzero? -1 : digit;


            auto [r_numb,r_waves]=solve(curr+1,newprepre,newpre,islimitV && (digit==limitD),newislzero);

            bool ispeak=false;
            bool isvalley=false;    
        
            if(!newislzero && prepre>=0 && pre>=0)
            {
                ispeak=(prepre<pre && pre>digit);
                isvalley=(prepre>pre && pre<digit);
            }

            if(ispeak || isvalley)
            {
                totalwave+=r_numb;
            }

            totalnumber+=r_numb;
            totalwave+=r_waves;

          }

          if(!islimitV && !islzero && pre>=0 && prepre>=0 && curr>=0)
          {
    
            Dptotalnumber[curr][prepre][pre]=totalnumber;
            Dptotalwave[curr][prepre][pre]=totalwave;
            
          }

          return {totalnumber,totalwave};

    }
    
    ll fun(long long num)
    {
        if(num<100)
        {
            return 0;
        }

        memset(Dptotalnumber,-1,sizeof(Dptotalnumber));
        memset(Dptotalwave,-1,sizeof(Dptotalwave));

        s=to_string(num);
        n=s.length();

        auto [totalnumbers,totalWaveScore]=solve(0,-1,-1,true,true);

        return totalWaveScore;
        
    }
    
    long long totalWaviness(long long num1, long long num2) {

       return fun(num2)-fun(num1-1);


        
    }
};