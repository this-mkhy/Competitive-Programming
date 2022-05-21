/*
    [-2,1,-3,4,-1,2,1,-5,4]

    [1,-3,4]    => 2
    [4,-1,2,1]  => 6    max
    [2,1,-5,4]  => 2
    [1,-5,4]    => 0
*/


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN;
        int cur=0;
        
        for(auto i:nums)
        {
            if(cur<0) {
                cur=0;
            }
            
            cur += i;
            maxSum =  max(maxSum , cur);
        }
            
        return maxSum;
    }
};