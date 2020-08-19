class Solution {
public:
    string toGoatLatin(string S) {
        
        string res = "";
        string temp = "";
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int count  = 1;
        for(int i=0; i<S.size(); i++)
        {
            char ch = S[i];
            if(ch==' ' || i==S.size()-1)
            {
                if(i==S.size()-1)
                    temp += ch;
                
                if(vowels.find(temp[0]) == vowels.end())
                {
                    for(int i=1; i<temp.size(); i++)
                        res += temp[i];
                    res += temp[0];
                }
                else
                    res += temp;
                
                res += "ma";
                
                for(int i=1; i<=count; i++)
                    res += "a";
                count++;
                
                if(i != S.size()-1)
                    res += ch;
                temp = "";
            }
            else
                temp += ch;
        }
        return res;
    }
};
