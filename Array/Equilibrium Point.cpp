//link to problem https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1/

int equilibriumPoint(long long a[], int n){
    
            // Your code here
    int sum = 0; // sum of whole array 
    int leftsum = 0; // leftsum 
  
    for (int i = 0; i < n; ++i) 
        sum += a[i]; 
  
    for (int i = 0; i < n; ++i) 
    { 
        sum -= a[i]; // sum is now right sum for index i 
  
        if (leftsum == sum) 
            return (i+1); 
  
        leftsum += a[i]; 
    } 
  
    return -1; 
} 
