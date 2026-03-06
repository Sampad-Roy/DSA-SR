class Solution {
public:
    string trimTrailingVowels(string s) {
        int cnt=0;
        int n=s.size();
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                cnt++;
            }
            else
            {
                break;
            }
        }

        int size=s.size()-cnt;
        string a;
        for(int i=0; i<size; i++)
        {
          a.push_back(s[i]);
        }

        return a;


        
    }
};