//link to problem https://leetcode.com/problems/truncate-sentence/


class Solution {
public:
    string truncateSentence(string s, int k) {
        for (int i=0;i<s.length();i++){
            if(s[i]==' ' && --k ==0)
                return s.substr(0,i);
        }
        return s;
    }
};
