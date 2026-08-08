class Solution {
public:
    vector<int> validSequence(string word1, string word2) {

        // vdcca
        // abc

        // 

        int n=word1.size();
        int m=word2.size();
        
        int i=n-1;
        int j=m-1;

        vector<int>rightm(n,0);
        int cnt=0;
        while(i>=0)
        {
           if(j>=0 && word1[i]==word2[j])
           {
              cnt++;
              j--;
           }

           rightm[i]=cnt;
           i--;

        }
        //vbcca
        //abc
        //2 2 1 1 0

        vector<int>seq;
        int change=1;

        i=0,j=0;


        while(i<n && j<m)
        {
            if(word1[i]==word2[j])
            {
                seq.push_back(i);
                j++;
            }
            else if(change==1 && i+1<n && rightm[i+1] >= m-j-1)
            {
                seq.push_back(i);
                j++;
                change=0;
            }
            i++;
        }


        if(j==m)
        {
            return seq;
        }

        return vector<int>();











    }
};