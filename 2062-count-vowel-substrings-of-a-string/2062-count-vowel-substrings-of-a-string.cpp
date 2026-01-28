class Solution {
public:
    int countVowelSubstrings(string word) {
        int n=word.size();
        int l=0,r=0,ans=0,start=0;

        int unique=0;
        int freq[5]={0};
        

        for(int r=0; r<n; r++)
        {
           char x=word[r];
           if(x!='a' && x!='e' && x!='i' && x!='o' && x!='u')
           {
             for(int i=0; i<5; i++)
             {
                freq[i]=0;
             }
             unique=0;
             l=r+1;
             start=r+1;
             continue;
           }


           //if find
           if(x=='a' && freq[0]++==0) unique++;
           if(x=='e' && freq[1]++==0) unique++;
           if(x=='i' && freq[2]++==0) unique++;
           if(x=='o' && freq[3]++==0) unique++;
           if(x=='u' && freq[4]++==0) unique++;

           while(unique==5)
           {    
           //Shink
           char c=word[l];
           if(c=='a' && --freq[0]==0) unique--;
           if(c=='e' && --freq[1]==0) unique--;
           if(c=='i' && --freq[2]==0) unique--;
           if(c=='o' && --freq[3]==0) unique--;
           if(c=='u' && --freq[4]==0) unique--;
           l++;
       
           } 

           ans+=(l-start);  
    

        }


       return ans;



    }
};