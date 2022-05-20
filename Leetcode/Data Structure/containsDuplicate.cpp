/*
    Arry      => Sorting   => Result
    [1,2,3,1] => [1,1,2,3] => true
    [1,2,3,4] => [1,2,3,4] => false
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return unique(nums.begin(), nums.end()) != nums.end();
    }
};