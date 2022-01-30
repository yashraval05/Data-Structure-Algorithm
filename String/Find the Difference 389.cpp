//link to problem https://leetcode.com/problems/find-the-difference/
//using XOR properties we can solve bit manipulation
class Solution {
public:
    char findTheDifference(string s, string t) {
        char res = 0;
        int i = 0;
        while(i < s.size()) {
            res ^= s[i] ^ t[i];
            i++;
        }
        
        return res ^ t[i];
    }
};
