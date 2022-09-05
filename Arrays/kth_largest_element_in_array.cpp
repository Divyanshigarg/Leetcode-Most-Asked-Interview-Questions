/*Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.

You must solve it in O(n) time complexity.

 

Example 1:

Input: nums = [3,2,1,5,6,4], k = 2
Output: 5
Example 2:

Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4
*/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // sort the given array in ascending order 
        sort(nums.begin(), nums.end());
       int n = nums.size();
       return nums[n-k];
    }
};

problem link:
https://leetcode.com/problems/kth-largest-element-in-an-array/
