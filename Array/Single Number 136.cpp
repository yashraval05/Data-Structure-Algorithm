//link to problem https://leetcode.com/problems/single-number/

//Using the properties of XOR
//1.XOR of same number is 0 
//2. XOR of a number with 0 is number itself

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++){
            result = result ^ nums[i];
        }
        return result;
    }
};
