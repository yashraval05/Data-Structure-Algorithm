//link to problem https://practice.geeksforgeeks.org/problems/minimum-distance-between-two-numbers/1/

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
    //previous index and min distance
    int i=0,p=-1, min_dist=INT_MAX;
     
    for(i=0 ; i<n ; i++)
    {
        if(a[i] ==x || a[i] == y)
        {
            //we will check if p is not equal to -1 and
            //If the element at current index matches with
            //the element at index p , If yes then update
            //the minimum distance if needed
            if(p != -1 && a[i] != a[p])
                min_dist = min(min_dist,i-p);
              
            //update the previous index
            p=i;
        }
    }
    //If distance is equal to int max
    if(min_dist==INT_MAX)
       return -1;
    return min_dist;
    }
};
