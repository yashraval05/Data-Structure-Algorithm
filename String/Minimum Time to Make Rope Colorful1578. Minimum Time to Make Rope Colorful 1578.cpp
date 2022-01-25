class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0;
        int n=colors.size();
        int start=0;
        while(start<n)
        {
            int end=start;
            int maximum=INT_MIN;
            int totalTime=0;
            while(end<n && colors[start]==colors[end])
            {
                maximum=max(maximum,neededTime[end]);
                totalTime+=neededTime[end];
                end++;
            }
            if(end-start>1)
            {
                //keep maximum and remove all with minimum time
                ans+=totalTime-maximum;
                
            }
            start=end;
        }
        
        return ans;
    }
};
