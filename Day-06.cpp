/*
    Using the information given in the question
    1 <= a[i] <= n
    Iterate the array elements for i=0 to i=(arr_size-1)
    such that for each a[i], multiply the value at index a[i]-1 by -1
    The negative value in array represents that value is appeared once
    during iteration any value at index a[i]-1 appears negative means value a[i] is repeated
*/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        
        
        for(int i=0; i<nums.size(); i++)
        {
            // checks index (nums[i]-1) is negative 
            // if yes, means nums[i] already appeared once
            if(nums[abs(nums[i])-1]<0)              
                res.push_back(abs(nums[i]));
            // Otherwise marks value at index nums[i]-1 as negative
            else
                nums[abs(nums[i])-1] *= -1;
        }
            
        
        return res;
    }
};
