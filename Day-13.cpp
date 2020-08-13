class CombinationIterator 
{
public:
    vector<vector<char>>ans;
    int k = 0;
    void filterChars(int i,string s,int len)
    {
        int j = 0;
        vector<char> helper;
        while(i>0)
        {
            int last_bit  = (i&1);
            if (last_bit == 1)
            {
                helper.push_back(s[j]);   
            }
            j++;
            i = i >> 1;
        }
        if(helper.size() == len)
        {
            ans.push_back(helper);
        }
    }
    
    CombinationIterator(string characters, int combinationLength) 
    {
        int n = characters.length();
        for(int i=0;i<(1<<n);i++)
        {
            filterChars(i,characters,combinationLength);
        }
        sort(ans.begin(),ans.end());
    }
    string next() 
    {
        string ans2 = "";
        for(int i=0;i<ans[k].size();i++)
        {
            ans2 = ans2 + ans[k][i];
        }
        k++;
        return ans2;
    }
    
    bool hasNext() 
    {
        if(k < ans.size())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
