class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> CountDistinct;
        int i;
        for (i=0;i<n;i++){
            CountDistinct.insert(a[i]);
        }
        for (i=0;i<m;i++){
            CountDistinct.insert(b[i]);
        }
        return CountDistinct.size();
    }
};
