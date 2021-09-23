//link to problem https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1#

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here 
      int sum=0;
      int min=INT_MAX;
      int i=0,j=0;
      while(j<n)
      {
         while(sum<=x && j<n)
         {
             sum+=arr[j++];
         }
         while(sum>x)
         {
             if(j-i<min)
             min=j-i;
             sum-=arr[i];
             i++;
         }
      }
      return min;
    }
