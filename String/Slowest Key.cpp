//link to problem https://leetcode.com/problems/slowest-key/

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
     int i;
        for (i=releaseTimes.size()-1;i>0;i--){
            releaseTimes[i]=releaseTimes[i]-releaseTimes[i-1];
        }
        int max=0;
        char ans;
        for (i=0;i<releaseTimes.size();i++){
            if(releaseTimes[i]>max){
                max = releaseTimes[i];
                ans = keysPressed[i];
            }else if(releaseTimes[i]==max){
                if (keysPressed[i]>ans)
                    ans = keysPressed[i];
            }
        }
        return ans;
    }
};
