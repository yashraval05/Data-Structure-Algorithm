//link to problem https://leetcode.com/problems/replace-all-s-to-avoid-consecutive-repeating-characters/

class Solution {
public:
    string modifyString(string s) {
    for(int i=0; i<s.length(); i++){
        if(i==0 && s[i]=='?'){
            if(s[i+1]!='a'){
                s[i]='a';
            }   
            else{
                s[i]='b';
                }
        }
        if(i==s.length()-1 && s[i]=='?'){
            if(s[i-1]!='a'){
                s[i]='a';
            }
            else{
                s[i]='b';
            }
        }
        else{
            if(s[i]=='?' && s[i-1]!='a' && s[i+1]!='a'){    
                s[i]='a';
            }
        else if(s[i]=='?' && s[i-1]!='b' && s[i+1]!='b'){
            s[i]='b';
        }
        else if(s[i]=='?' && s[i-1]!='c' && s[i+1]!='c'){
            s[i]='c';
        }
        }
    }
    return s;
}
};
