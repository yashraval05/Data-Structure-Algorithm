//link to problem https://practice.geeksforgeeks.org/problems/next-permutation5226/

    vector<int> nextPermutation(int n, vector<int> a){
        // code here
        int i,j;
        vector<int> ans;
        for(i=n-2;i>=0;i--){
            if(a[i]>a[i+1])
                break;
        }
        if(i<0)
            reverse(a.begin(),a.end());
        else{
            
        }
        for (i=0;i<n;i++){
            ans.push_back(a[i]);
        }
        return ans;
    }
