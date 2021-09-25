//link to problem https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int right = 0;
        int n = nums.size();
        int mid = 0;
        while (mid<n){
            if (nums[mid]!=0){
                swap(nums[mid],nums[right]);
                mid++;
                right++;
            }
            else{
                mid++;
            }
        }
    }
};
