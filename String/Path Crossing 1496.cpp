//link to problem https://leetcode.com/problems/path-crossing/
//cant use unordered map 
class Solution {
public:
    bool isPathCrossing(string path) {
        int i=0,j=0;
        map<pair<int, int>,int> mp;
        mp[{0,0}]++;
        for (int p=0;p<path.length();p++){
            if(path[p]=='N')
                i++;
            else if(path[p]=='S')
                i--;
            else if(path[p]=='E')
                j++;
            else
                j--;
            if(mp.find({i,j})!=mp.end())
                return true;
            else  
                mp[{i,j}]++;
        }
        return false;
    }
};
