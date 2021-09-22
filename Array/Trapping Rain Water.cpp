    //link to problem https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1#
    
    long long trappingWater(int arr[], int n){
        // code here
    int left = 0;
    int right = n-1;
    int l_max = 0;
    int r_max = 0;
    long long result = 0;
    while (left <= right)
    {
      if(r_max <= l_max)
      {
        result += max(0, r_max-arr[right]);
        r_max = max(r_max,arr[right]);
        right -= 1;
      }
      else
      {
        result += max(0, l_max-arr[left]);
        l_max = max(l_max, arr[left]);
        left += 1;
      }
    }
    return result;
    }
