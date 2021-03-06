//link to problem https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1#

string isSubset(int a1[], int a2[], int n, int m) {
    unordered_set <int> s;
    for (int i=0;i<n;i++){
        s.insert(a1[i]);
    }
    for (int i=0;i<m;i++){
        if (s.count(a2[i])==s.empty())
            return "No";
    }
    return "Yes";
}
