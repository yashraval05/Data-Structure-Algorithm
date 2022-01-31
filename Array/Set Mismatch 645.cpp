//link to problem https://leetcode.com/problems/set-mismatch/

class Solution {
public:
vector<int> findErrorNums(vector<int>& nums) {
    vector<int>ans(2);
    for(auto& num:nums)
        if(nums[abs(num) - 1] < 0) ans[0] = abs(num);
        else nums[abs(num) - 1] = -nums[abs(num) - 1];
	for(int i = 0; i < nums.size(); i++)
       if(nums[i] > 0) ans[1] = i + 1;
    return ans;
}
};
