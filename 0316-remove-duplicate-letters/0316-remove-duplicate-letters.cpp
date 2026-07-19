class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        int n=s.size();
        string result="";
        vector<bool>taken(26,false);
        vector<int>last(26);

        for(int i=0; i<n; i++)
        {   
            char ch=s[i];
            last[ch-'a']=i;
        }


        for(int i=0; i<n; i++)
        {
            char ch=s[i];
            
            if(taken[ch-'a']==true)
            {
                continue;
            }

            while(result.length()>0 && result.back()>ch && last[result.back()-'a']>i)
            {   
                taken[result.back()-'a']=false;
                result.pop_back();
            }
            result.push_back(ch);
            taken[ch-'a']=true;
        }

        return result;
    }
};