//link to problem https://leetcode.com/problems/valid-mountain-array/

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size()<3)
            return false;
        int left=0;
        int right=arr.size()-1;
        while (left<right){
            if (arr[left]<arr[left+1])
                left++;
            else if(arr[right]<arr[right-1])
                right--;
            else 
                return false;
        }
        if (left!=0 && right !=arr.size()-1)
            return true;
        else 
            return false;
    }
};
