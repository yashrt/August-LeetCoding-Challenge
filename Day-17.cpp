class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> res(num_people,0);
        int i=1;
        while(candies>0)
        {
            if(i<candies)
            {
                res[(i-1)%num_people] += i;
                candies -= i;
            }
            else
            {
                res[(i-1)%num_people] += candies;
                candies = 0;
            }
            i++;
        }
        return res;
    }
};
