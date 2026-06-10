class segmenttree{

public:

 vector<int>Segmenttree;

 bool ismin;

 segmenttree(vector<int>&nums, bool f)
 {
      int n=nums.size();
      this->ismin=f;

      Segmenttree.resize(4*n);


      buildsegment(0,0,n-1,nums);

 }

 void buildsegment(int i,int l,int r,vector<int>&nums)
 {
    if(l==r)
    { 
        Segmenttree[i]=nums[l];
        return;
    }

    int mid=l+(r-l)/2;
    buildsegment(2*i+1,l,mid,nums);
    buildsegment(2*i+2,mid+1,r,nums);


    if(ismin) Segmenttree[i]=min(Segmenttree[2*i+1],Segmenttree[2*i+2]);
    else Segmenttree[i]=max(Segmenttree[2*i+1],Segmenttree[2*i+2]);
    
 }


 int querysegmenttree(int start,int end,int i,int l,int r)
 {
    if(l>end || r<start)
    {
        return ismin ? INT_MAX : INT_MIN;
    }


    if(l>=start && r<=end)
    {
        return Segmenttree[i];
    }


    int mid=l+(r-l)/2;

    int a=querysegmenttree(start,end,2*i+1,l,mid);
    int b=querysegmenttree(start,end,2*i+2,mid+1,r);

    if(ismin)
    {
        return min(a,b);
    }
    else
    {
        return max(a,b);
    }

 }
 int query(int l,int r,int n)
 {
     return querysegmenttree(l,r,0,0,n-1);
 }

};


class Solution {
public:
    typedef long long ll;
    
    ll getvalue(int l,int r,segmenttree &minST, segmenttree &maxST,int n)
    {
        int mn = minST.query(l,r,n);
        int mx = maxST.query(l,r,n);

        return 1LL*(mx-mn);
    }


    long long maxTotalValue(vector<int>& nums, int k) 
    {
        ll n=nums.size();


        segmenttree minST(nums,true); //min
        segmenttree maxST(nums,false); //max

        
       // val,l,r

       priority_queue<tuple<ll,ll,ll>>pq;

       for(int l=0; l<n; l++)
       {
         ll value=getvalue(l,n-1,minST,maxST,n);
         pq.push({value,l,n-1});
       }
       
       //st-2

       ll ans=0;
       while(k--)

       {
        auto[value,l,r] = pq.top();
        pq.pop();
        
        ans+=value;
        if(l<r)
        {
        ll nxtbest=getvalue(l,r-1,minST,maxST,n);
        pq.push({nxtbest,l,r-1});
        }  
       }


       return ans;



    }
};