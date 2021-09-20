//link to problem https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1

    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int sum = 0;
        unordered_map<int , bool> m;
        for (int i=0;i<n;i++){
            sum += arr[i];
            if (sum == 0 || m.count(sum)==true)
                return true;
            else
                m[sum]=true;
        }
        return 0;
    }
