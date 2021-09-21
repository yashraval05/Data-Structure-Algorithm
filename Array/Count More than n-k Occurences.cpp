//link to problem https://practice.geeksforgeeks.org/problems/count-element-occurences/1

    int countOccurence(int arr[], int n, int k) {
        // Your code here
        unordered_map<int,int> m;
        int count=0;
        int temp = n/k;
        for (int i = 0;i<n;i++){
            m[arr[i]]++;
        }
        for (auto i : m){
            if (i.second>temp)
                count++;
        }
        return count;
    }
