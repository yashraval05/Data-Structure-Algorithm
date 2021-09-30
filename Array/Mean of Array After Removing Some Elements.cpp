//link to problem https://leetcode.com/problems/mean-of-array-after-removing-some-elements/

class Solution {
public:
    double trimMean(vector<int>& arr) {
        int i,j,n=arr.size();
        int num=0;
        double sum=0,remove=(0.05)*n;
        sort(arr.begin(),arr.end());
        for(i=remove;i<n-remove;i++)
        {
            num++;
            sum+=arr[i];
        }
        return sum/num;
    }
};
