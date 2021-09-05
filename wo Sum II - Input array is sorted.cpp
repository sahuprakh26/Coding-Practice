/*Given an array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number.

Return the indices of the two numbers (1-indexed) as an integer array answer of size 2, where 1 <= answer[0] < answer[1] <= numbers.length.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

 */
 class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        
        /** we will use two pointers since we are given a sorted array
        **/
        
        int start = 0;
        int end = nums.size() - 1;
        
        while(start < end) {
            int sum = nums[start] + nums[end];
            
            if(sum > target) {
                end--;
            }else if(sum < target) {
                start++;
            }else{
                return vector<int>{start + 1, end + 1};
            }
        }
        
        return vector<int>{start + 1, end + 1};
    }
};
