//link to probelm https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1#

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
        int i,count=0;
        for (i=0;i<n;i++){
            if (arr[i]<=k)
                count++;
        }
        int bad=0;
        for (i=0;i<count;i++){
            if (arr[i]>k)
                bad++;
        }
        int ans = bad;
        for (int j=count,i=0; j<n;i++,j++){
            if (arr[i]>k){
                bad--;
            }
            if (arr[j]>k)
                bad++;
            ans = min(ans,bad);
        }
        return ans;
    }
};
