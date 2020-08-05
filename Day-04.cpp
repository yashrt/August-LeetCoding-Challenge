class Solution {
public:
    float lg(int a, int b)
    {
        return log(a)/log(b);
    }
   
    bool isPowerOfFour(int num) {
        if(num==0)
            return false;
        
        return floor(lg(num,4))== ceil(lg(num, 4));
    }
};
