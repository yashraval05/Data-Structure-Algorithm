//link to problem https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1#

        vector<string>find_permutation(string S)
        {
            vector<string>res;
            // sort the string in lexicographically order
            sort(S.begin(), S.end());
            do
            {
                // keep adding while there is next permutation
                res.push_back(S);
            }while(next_permutation(S.begin(), S.end()));
            return res;
        }

void permute(string s, int l, int r){
  if(l==r){
    print(s)
  }
  for(int i=l;i<=r;i++){
    s=swap(s,l,i);
    permute(s,l+1,r);
    s=swap(s,l,i);
  }
}
