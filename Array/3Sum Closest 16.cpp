//link to problem https://leetcode.com/problems/3sum-closest/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=0;
        int curr_sum;
        int diff= INT_MAX;
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size();i++){
            int first=nums[i];
            int start=i+1;
            int end = nums.size()-1;
            while(start<end){
                curr_sum = first + (nums[start] + nums[end]);
                if (curr_sum==target)
                    return target;
                if (abs(curr_sum-target)<diff){
                    diff=abs(curr_sum-target);
                    ans = curr_sum;
                }
                if(curr_sum>target)
                    end--;
                else
                    start++;
            }
        }
        return ans;
    }
};
