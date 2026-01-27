class Solution {
public:

    bool check(vector<int>&c)
    {

        for(auto u:c)
        {
            if(u==0) return false;
        }
        return true;
    }


    int countVowelSubstrings(string word) {

        int n=word.size();
        int total=0;
        for(int i=0; i<n; i++)
        {

            vector<int>c(5,0);
            for(int j=i; j<n; j++)
            {
              if(word[j]=='a') c[0]++;
              else if(word[j]=='e') c[1]++;
              else if(word[j]=='i') c[2]++;
              else if(word[j]=='o') c[3]++;
              else if(word[j]=='u') c[4]++;
              else break;
              if(check(c)) total++;
            }
        }
        
        return total;
    }
};