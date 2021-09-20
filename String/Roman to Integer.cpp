//link to problem https://leetcode.com/problems/roman-to-integer/
// Logic Right to left traversal and if num on left is smaller u subtract else add;
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int sum=m[s[s.length()-1]];
        for (int i=s.length()-2;i>=0;i--){
            if (m[s[i]]<m[s[i+1]])
                sum -=m[s[i]];
            else
                sum += m[s[i]];
        }
    return sum;
    }
};
