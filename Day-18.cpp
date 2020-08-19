class Solution {
public:
    void getAll(int curr, pair<int, int> next, int N, int K, vector<int>& res)
    {
        if(N==0)
        {
            res.push_back(curr);
            return;
        }
            
        int first = next.first;
        int second = next.second;
        
        if(first != -1)
        {
            pair<int,int> temp;
            temp.first = (first-K>=0) ? first-K : -1;
            temp.second = (first+K < 10) ? K+first : -1;
            
            getAll(curr*10+first, temp, N-1, K, res);
        }
        
        if(second != -1 && second != first)
        {
            pair<int,int> temp;
            temp.first = (second-K>=0) ? second-K : -1;
            temp.second = (second+K < 10) ? K+second : -1;
            getAll(curr*10+second, temp, N-1, K, res);
        }
    }
    
    vector<int> numsSameConsecDiff(int N, int K) {
        vector<int> res;
        
        if(N==1)
            return {0,1,2,3,4,5,6,7,8,9};
        
        for(int i=1; i<10; i++)
        {
            if((i<K && i+K<10) ||i>=K)
            {
                pair<int, int> next;
                next.first = (i-K>=0) ? i-K : -1;
                next.second = (i+K < 10) ? K+i : -1;
                getAll(i, next, N-1, K, res);
            }
        }
        
        return res;
    }
};
