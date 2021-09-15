// link to problem https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
//solved using 2 pointer method

class Solution
{
    void sort012(int a[], int n)
    {
        // coode here
        int left=0;
        int mid=0;
        int right=n-1;
        
        while (mid<=right){
            if (a[mid]==0)
                swap(a[mid++],a[left++]);
            else {if (a[mid]==1)
                        mid++;
            else {if (a[mid]==2)
                    swap(a[mid],a[right--]);
            }
          }
            
        }
    }
};
