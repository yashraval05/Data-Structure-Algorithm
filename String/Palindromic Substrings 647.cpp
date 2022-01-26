//link to problem https://leetcode.com/problems/palindromic-substrings/
// using DP

class Solution {
public:
    int countSubstrings(string s) {
        int count=0;
        int i,j;
        int n=s.length();
        bool dp[n][n];
        for(int gap=0;gap<n;gap++){
            for(i=0,j=gap;j<n;i++,j++){
                if(gap==0){
                    dp[i][j] = true;
                }
                else if(gap==1){
                    if(s[i]==s[j])
                        dp[i][j]= true;
                    else
                        dp[i][j] = false;
                }
                else{
                    if(s[i]==s[j] && dp[i+1][j-1])
                        dp[i][j]= true;
                    else
                        dp[i][j] = false;
                }
                if(dp[i][j])
                    count++;
            }
        }
        return count;
    }
};
