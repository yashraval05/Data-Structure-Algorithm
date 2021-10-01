//link to problem https://leetcode.com/problems/longest-harmonious-subsequence/

class Solution {
public:
    int findLHS(vector<int>& nums) {
       
        int ans=0;
        unordered_map<int,int> mp;
        for(int val:nums) mp[val]++;
        
        for(auto p:mp)
        {
            if(mp.find(p.first-1)!=mp.end())   
            {
                ans=max(ans,p.second+mp[p.first-1]);
            }
        }
     
        return ans;
    }
};
