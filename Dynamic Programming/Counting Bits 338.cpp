//link to problem https://leetcode.com/problems/counting-bits/

//if the num is even then number of 1 bits are same as num/2 just the position changes 2 4 8...
//if the num is odd then number of 1 bits are same as num/2+1
class Solution {
public:
    vector<int> countBits(int n) {
       vector<int> ans(n+1);
        ans[0] = 0;
        for (int i=1;i<=n;i++){
            ans[i]=ans[i/2]+i%2;
        }
        return ans;
    }
};
