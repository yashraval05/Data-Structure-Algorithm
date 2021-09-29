//link to problem https://practice.geeksforgeeks.org/problems/ishaan-loves-chocolates2156/1/


int chocolates(int arr[], int n)
{
    // Complete the function
    int min=arr[0];
    for(int i =1;i<n;i++)
    {if(arr[i]<min)
     min=arr[i];
    }
    return min;
    
}
