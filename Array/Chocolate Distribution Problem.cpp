//link to problem https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1#

    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    if (n==0 || m==0)
        return 0;
        
   sort(a.begin(),a.end());
   long long  min= INT_MAX;
   for(int i=0;i+m-1<n;i++)
   {
       int d=a[i+m-1]-a[i];
       if(d<min)
       {
           min=d;
       }
   }
   return min;
    }
